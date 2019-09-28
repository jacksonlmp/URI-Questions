#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
int count = 0;
int i, soma, entrada, count2, valor;
char a[10002], b[10002];

scanf("%i", &entrada);

while(count < entrada){
  scanf("%s %s", &a, &b);

  count2 = strlen(a);

  for(i = 0; i < count2; i++){
    valor = b[i] - a[i];

    if(valor < 0){
      soma += valor + 26;
    }
    else{
      soma += valor;
    }
  }
  printf("%i\n", soma);
  soma = 0;
  count++;
}

return 0;
}
