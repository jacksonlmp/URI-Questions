#include <stdio.h>
#include <stdlib.h>

int main(){
int A, B, C, D;

scanf("%i %i %i", &A, &B, &C);

D = (A+B+abs(A-B))/2;
D = (D+C+abs(D-C))/2;

printf("%i eh o maior\n", D);

  return 0;
}
