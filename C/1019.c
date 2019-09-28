#include <stdio.h>
#include <stdlib.h>

int main(){
int h, m, s, n;

scanf("%i", &n);

h = n / 3600;
m = n % 3600 / 60;
s = n % 60;

printf("%i:%i:%i\n", h, m, s);


  return 0;
}
