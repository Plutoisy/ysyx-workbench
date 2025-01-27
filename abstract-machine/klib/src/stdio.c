#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);

    const char *p = fmt;
    char *out_ptr = out;

    while (*p) {
        if (*p == '%') {
            p++; // Skip the '%'
            if (*p == 'd') {
                int num = va_arg(args, int);
                out_ptr += sprintf(out_ptr, "%d", num);
            } else if (*p == 's') {
                const char *str = va_arg(args, const char *);
                out_ptr += sprintf(out_ptr, "%s", str);
            }
            // Add more format specifiers as needed
        } else {
            *out_ptr++ = *p;
        }
        p++;
    }

    *out_ptr = '\0'; // Null-terminate the output string
    va_end(args);

    return (int)(out_ptr - out); // Return the number of characters written
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
