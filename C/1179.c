#include <stdio.h>
#include <stdlib.h>

int main(){
int num, i, j;
int impar[10], par[10], tam_par,tam_impar;

for(i = 0; i < 15; i++){
  scanf("%i", &num);
  if((num % 2) == 0){
    par[tam_par] = num;
    tam_par++;
  }
  else{
    impar[tam_impar] = num;
    tam_impar++;
  }

  if(tam_impar == 5){
    for(j = 0; j < 5; j++){
      printf("impar[%i] = %i\n", j, impar[j]);
    }
    tam_impar = 0;
  }

  if(tam_par == 5){
    for(j = 0; j < 5; j++){
      printf("par[%i] = %i\n", j, par[j]);
    }
    tam_par;
  }
}
for(j = 0; j < tam_impar; j++){
  printf("impar[%i] = %i\n", j, impar[j]);
}

for(j = 0; j < tam_par; j++);{
  printf("par[%i] = %i\n", j, par[j]);
}

}
