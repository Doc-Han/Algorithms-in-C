#include <stdio.h>

int main() {
  int a = 3;
  int b = 4;
  int temp = a;
  printf("Before: a = %i b = %i\n", a,b);
  a = b;
  b = temp;
  printf("After: a = %i b = %i\n", a,b);
  return 0;
}
