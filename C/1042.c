#include <stdio.h>
#include <stdlib.h>

int main(){
int a, b, c;

scanf("%i %i %i", &a, &b, &c);

if(a > b && a > c){
  printf("%i\n", a);
  printf("%i\n", b);
  printf("%i\n", c);
}
else if(b > a && b > c){
  printf("%i\n", b);
  printf("%i\n", a);
  printf("%i\n", c);
}
else if(c > a && c > b){
  printf("%i\n", c);
  printf("%i\n", a);
  printf("%i\n", b);
}
}
