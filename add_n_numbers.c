#include <stdio.h>

int main(){
  int n;
  int total = 0;
  printf("How many numbers to add? ");
  scanf("%i", &n);
  while(n>0){
    int i;
    printf("Enter value: ");
    scanf("%i", &i);
    total += i;
    n--;
  }
  printf("Your total is %i\n", total);
}
