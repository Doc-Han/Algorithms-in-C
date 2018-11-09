#include <stdio.h>

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  if(n % 2 == 0){
    printf("Integer %i is even\n", n);
  }else{
    printf("Integer %i is odd\n", n);
  }
  return 0;
}
