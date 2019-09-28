#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

  double A, B, C, x1, x2, delta;

  scanf("%lf %lf %lf", &A, &B, &C);

delta = pow(B,2) - (4*A*C);

if ((A!=0) && (delta > 0)){
  delta = sqrt(delta);
  x1 = (-B) + (delta);
  x2 = (-B) - (delta);
  x1 = x1 / (2*A);
  printf("R1 = %.5lf\n", x1);
  x2 = x2 / (2*A);
  printf("R2 = %.5lf\n", x2);
}
else{
  printf("Impossivel calcular\n");
}
}
