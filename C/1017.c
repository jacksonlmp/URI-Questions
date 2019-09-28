#include <stdio.h>
#include <stdlib.h>

int main(){
float tempo, velocidade;
float distancia;

scanf("%f", &tempo);
scanf("%f", &velocidade);

distancia = (tempo * velocidade) / 12;

printf("%.3f\n", distancia);

  return 0;
}
