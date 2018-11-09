#include <stdio.h>

int main(){
  int a,n,sum = 0;
  printf("Enter an integer: ");
  scanf("%i", &n);
  a = n;
  while(a != 0){
    int rem = a % 10;
    sum += rem;
    a /= 10;
  }
  printf("The sum of %i is %i\n", n,sum);
}
