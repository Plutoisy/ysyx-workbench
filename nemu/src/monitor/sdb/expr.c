/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ, TK_NUM

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"==", TK_EQ},        // equal
  {"\\*", '*'},         // *
  {"/", '/'},           // /
  {"\\-", '-'},         // -
  {"\\(", '('},         // (
  {"\\)", ')'},         // )
  {"[0-9]+", TK_NUM},   // NUM
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;
bool wrong_eval_flag;

static bool make_token(char *e) {
  int position = 0;
  int i;
  int j = 0; //tokens position
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type) {
          case TK_NOTYPE:
            break;

          case '+':
            strncpy(tokens[j].str, substr_start, substr_len);
            tokens[j].type = rules[i].token_type;
            j++;
            nr_token++;
            break;

          case TK_EQ:
            strncpy(tokens[j].str, substr_start, substr_len);
            tokens[j].type = rules[i].token_type;
            j++;
            nr_token++;
            break;

          case '*':
            strncpy(tokens[j].str, substr_start, substr_len);
            tokens[j].type = rules[i].token_type;
            j++;
            nr_token++;
            break;

          case '/':
            strncpy(tokens[j].str, substr_start, substr_len);
            tokens[j].type = rules[i].token_type;
            j++;
            nr_token++;
            break;

          case '-':
            strncpy(tokens[j].str, substr_start, substr_len);
            tokens[j].type = rules[i].token_type;
            j++;
            nr_token++;
            break;
          
          case TK_NUM:
            //printf("%ld",sizeof(tokens[j].str)/sizeof(char));
            if(substr_len > sizeof(tokens[j].str) / sizeof(char) - 1){
              printf("str buffer overflow\n");
              return false;
            }
            strncpy(tokens[j].str, substr_start, substr_len);
            tokens[j].type = rules[i].token_type;
            j++;
            nr_token++;
            break;
          
          case '(':
            strncpy(tokens[j].str, substr_start, substr_len);
            tokens[j].type = rules[i].token_type;
            j++;
            nr_token++;
            break;

          case ')':
            strncpy(tokens[j].str, substr_start, substr_len);
            tokens[j].type = rules[i].token_type;
            j++;
            nr_token++;
            break;

          default: break;
        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

static bool check_parentheses(int p, int q) {
  if(tokens[p].type != '('){
    return false;
  }
  else{
    int lnum = 1;
    int rnum = 0;
    for(int i = p + 1; i <= q; i++){
      if(tokens[i].type == '('){
        lnum++;
      }
      if(tokens[i].type == ')'){
        rnum++;
        if(rnum > lnum || (rnum == lnum && i < q)){
          return false;
        }
      }
    }
    if(lnum == rnum){
      return true;
    }
    else{
      return false;
    }

  }
}

int find_main_op(int p, int q){
  int lnum = 0;
  int rnum = 0;
  int real_op = p;
  if(tokens[p].type == '-'){
    return p;
  }
  for(int i = p; i <= q; i++){
    if(rnum > lnum){
      return -1;
    }
    if(tokens[i].type == '('){
      lnum++;
    }
    if(tokens[i].type == ')'){
      rnum++;
    }
    if(lnum == rnum && (tokens[i].type == '+' || tokens[i].type == '-' || tokens[i].type == '*' || tokens[i].type == '/')){
      if((tokens[real_op].type == '+' || tokens[real_op].type == '-') && (tokens[i].type == '*' || tokens[i].type == '/')){
        real_op = real_op;
      }
      else if(tokens[i].type == '-' && tokens[i+1].type == TK_NUM && (tokens[i-1].type != TK_NUM && tokens[i-1].type != ')')){
        real_op = real_op;
      }
      else{
        real_op = i;
      }
    }
  }
  return real_op;
}

word_t eval(int p, int q){
  if (p > q) {
    /* Bad expression */
    printf("Bad expression\n");
    wrong_eval_flag = true;
    return 0;
  }
  else if (p == q) {
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */
    word_t tokens_p_str_int;
    // printf("%s\n",tokens[p].str);
    sscanf(tokens[p].str,"%u",&tokens_p_str_int);
    return tokens_p_str_int;
  }
  else if (check_parentheses(p, q) == true) {
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    return eval(p + 1, q - 1);
  }
  else {
    int op;
    word_t val1, val2;
    op = find_main_op(p, q);
    if(op == -1){
      printf("parentheses not match\n");
      wrong_eval_flag = true;
      return 0;
    }
    // op = the position of 主运算符 in the token expression;
    if(p == op){
      switch (tokens[op].type) {
        case '+': val1 = 0; break;
        case '-': val1 = 0; break;
        case '*': wrong_eval_flag = true; printf("* need 2 operators\n"); return 0;
        case '/': wrong_eval_flag = true; printf("- need 2 operators\n"); return 0;
        default:  wrong_eval_flag = true; printf("error\n"); return 0;
      }
    }
    else{
      val1 = eval(p, op - 1);
    }
    
    val2 = eval(op + 1, q);

    switch (tokens[op].type) {
      case '+': return val1 + val2;
      case '-': return val1 - val2;
      case '*': return val1 * val2;
      case '/': return val1 / val2;
      default: assert(0);
    }
    return 0;
  }
}



word_t expr(char *e, bool *success) {
  word_t eval_result;
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  /* TODO: Insert codes to evaluate the expression. */
  wrong_eval_flag = false;
  eval_result = eval(0, nr_token - 1);
  if(!wrong_eval_flag){
    printf("%u\n",eval_result);
    *success = true;
  }
  else{
    *success = false;
  }
  return 0;
}
