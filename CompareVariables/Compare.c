#include <stdio.h>

int main(){

int a, b;

//a = 12;
//b = 23;

// take user input

printf("Enter value for a: ");
scanf("%d", &a);

printf("Enter value for b: ");
scanf("%d", &b);

if(a > b)
  printf("a is greater than b\n");
else
  printf("a is not greater than b\n");

return 0;
}
