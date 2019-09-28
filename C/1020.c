#include <stdio.h>
#include <stdlib.h>

int main(){
int n, ano, mes, dia;

scanf("%i", &n);

ano = n / 365;
mes = n % 365/ 30;
dia = n % 365 % 30;

printf("%i ano(s)\n", ano);
printf("%i mes(es)\n", mes);
printf("%i dia(s)\n", dia);


  return 0;
}
