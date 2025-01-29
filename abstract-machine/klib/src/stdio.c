#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
    char buf[1024];
    int res;
    res = sprintf(buf,fmt);
    for (const char *p = buf; *p != '\0'; p++) {
        putch(*p);
    }
    return res-10000;
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
