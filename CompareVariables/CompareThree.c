#include <stdio.h>

int main(){

// values must be unique

int a, b, c;

a = 11;
b = 22;
c = 33;

if (a > b && a > c)
  printf("%d is the largest.\n", a);
if (b > a && b > c)
  printf("%d is the largest.\n", b);
if (c > a && c > b)
  printf("%d is the largest.\n", c);
else 
  printf("Values must be unique.\n");

return 0;
}
