#include <stdio.h>

int main(){
  int a,b,c;
  printf("Enter 3 numbers seperated with space: ");
  scanf("%i %i %i", &a,&b,&c);
  if(a > b && a > c){
    printf("%i is the greatest\n", a);
  }else if(b > c){
    printf("%i is the greatest\n", b);
  }else{
    printf("%i is the greatest\n", c);
  }
  return 0;
}
