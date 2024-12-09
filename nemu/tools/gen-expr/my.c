#include <stdio.h>
#include <stdint.h>
int main() {   unsigned result = 0 && (1/0);   printf("%u", result);   return 0; }
