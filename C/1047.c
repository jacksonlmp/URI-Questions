#include <stdio.h>
#include <stdlib.h>

int main(){
int hora_inicial, minuto_inicial, hora_final, minuto_final, duracao_hora, duracao_minuto;

scanf("%i %i %i %i",&hora_inicial, &minuto_inicial, &hora_final, &minuto_final);

duracao_hora = hora_final - hora_inicial;

if(duracao_hora  < 0){
  duracao_hora = 24 + (hora_final - hora_inicial);
}

duracao_minuto = minuto_final - minuto_inicial;

if(duracao_minuto < 0){
  duracao_minuto = 60 + (minuto_final - minuto_inicial);
  duracao_hora--;
}
if(hora_inicial == hora_final && minuto_inicial == minuto_final){
  printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
}
else{
  printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n",duracao_hora, duracao_minuto);
}

}
