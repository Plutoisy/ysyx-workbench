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

int sprintf(char *out, const char *fmt, ...){
   //panic("Not implemented");
   va_list args;
   va_start(args, fmt);
   
   char *ptr = out;
   const char *p = fmt;
   
   while (*p) {
       if (*p == '%' && (*(p + 1) == 's' || *(p + 1) == 'd')) {
           p++; // Skip '%'
           if (*p == 's') {
               char *str = va_arg(args, char *);
               while (*str) {
                   *ptr++ = *str++;
               }
           } else if (*p == 'd') {
               int num = va_arg(args, int);
               char num_str[12]; // Enough to hold INT_MIN
               snprintf(num_str, sizeof(num_str), "%d", num);
               char *num_ptr = num_str;
               while (*num_ptr) {
                   *ptr++ = *num_ptr++;
               }
           }
       } else {
           *ptr++ = *p;
       }
       p++;
   }
   
   *ptr = '\0'; // Null-terminate the output string
   va_end(args);
   
   return ptr - out; // Return the number of characters written
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
