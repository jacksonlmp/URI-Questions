#include <stdio.h>
#include <stdlib.h>

int main(){
int hora, viagem, fuso, prevista;

scanf("%i %i %i", &hora, &viagem, &fuso);

prevista = hora + viagem + fuso;

if(prevista < 0){
  prevista += 24;
}
printf("%i\n", prevista % 24);
}
