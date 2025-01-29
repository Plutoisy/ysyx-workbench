#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

void intToStr(int num, char *str) {
    int i = 0;
    int isNegative = 0;

    // 处理负数
    if (num < 0) {
        isNegative = 1;
        num = -num;
    }

    // 提取每一位数字
    do {
        str[i++] = (num % 10) + '0';
        num /= 10;
    } while (num > 0);

    // 如果是负数，添加负号
    if (isNegative) {
        str[i++] = '-';
    }

    // 添加字符串终止符
    str[i] = '\0';

    // 反转字符串
    int start = 0;
    int end = i - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int printf(const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);

    for (const char *p = fmt; *p != '\0'; p++) {
        if(*p != '%'){
            putch(*p);
        }else{
            p++;
            if(*p == 'd'){
                int num = va_arg(args, int);
                char intstr[20];
                intToStr(num, intstr);
                for (int i = 0; intstr[i] != '\0'; i++){
                    putch(intstr[i]);
                }
            }
            if(*p == 's'){
                char *s = va_arg(args, char *);
                while (*s) {
                    putch(*s);
                    s++;
                }
            }
        }
    }

    return 1; // 返回写入的字符数（不包括\0）
    //panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);
    char *current = out;

    for (const char *p = fmt; *p != '\0'; p++) {
        if (*p != '%') {
            *current++ = *p;
        } else {
            p++; // 跳过%
            switch (*p) {
                case 's': {
                    char *s = va_arg(args, char *);
                    while (*s) {
                        *current++ = *s++;
                    }
                    break;
                }
                case 'd': {
                    int num = va_arg(args, int);
                    unsigned int uvalue;
                    if (num < 0) {
                        *current++ = '-';
                        uvalue = (unsigned int)(-num);
                    } else {
                        uvalue = (unsigned int)num;
                    }
                    char buffer[16];
                    int i = 0;
                    do {
                        buffer[i++] = '0' + (uvalue % 10);
                        uvalue /= 10;
                    } while (uvalue > 0);
                    // 逆序输出buffer中的字符
                    while (i > 0) {
                        *current++ = buffer[--i];
                    }
                    break;
                }
                default:
                    // 处理未知格式符或单独的%
                    *current++ = '%';
                    if (*p) {
                        *current++ = *p;
                    }
                    break;
            }
        }
    }

    *current = '\0'; // 添加字符串结束符
    va_end(args);
    return current - out; // 返回写入的字符数（不包括\0）
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
