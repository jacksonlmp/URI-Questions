#include <stdlib.h>
#include <stdio.h>

int main(){

int cod_peca, num_peca;
int cod_peca_2, num_peca_2;
float valor_peca, valor_peca_2, valor;

scanf("%i %i %f", &cod_peca, &num_peca, &valor_peca);
scanf("%i %i %f", &cod_peca_2, &num_peca_2, &valor_peca_2);

valor =(valor_peca * num_peca) + (valor_peca_2 * num_peca_2);

printf("VALOR A PAGAR: R$ %.2f\n", valor);

  return 0;
}
