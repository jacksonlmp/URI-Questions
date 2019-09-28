#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
int n, j, i, soma;
char x[1110];

scanf("%i", &n);

for(i = 0; i < n; i++){
  scanf("%s", &x);

    for(j = 0; j < strlen(x); j++){
      if(x[j] == '1'){
        soma+=2;
      }
      else if(x[j] == '2'){
        soma+=5;
      }
      else if(x[j] == '3'){
        soma+=5;
      }
      else if(x[j] == '4'){
        soma+=4;
      }
      else if(x[j] == '5'){
        soma+=5;
      }
      else if(x[j] == '6'){
        soma+=6;
      }
      else if(x[j]== '7'){
        soma+=3;
      }
      else if(x[j] == '8'){
        soma+=7;
      }
      else if(x[j] == '9'){
        soma+=6;
      }
      else if(x[j] == '0'){
        soma+=6;
      }
    }
    printf("%i leds\n", soma);
    soma = 0;

}
}
