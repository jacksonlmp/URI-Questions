#include <stdio.h>
#include <stdlib.h>

int main(){
int n = 1;
int jogadas;
int mary = 0, john = 0;

while(n != 0){
  scanf("%i", &n);

  if(n == 0){
    return 0;
  }

  while(n--){
    scanf("%i", &jogadas);

    if(jogadas == 0){
      mary ++;
    }
    else{
      john++;
    }
  }
  printf("Mary won %i times and John won %i times\n", mary, john);
  mary = 0;
  john = 0;
}




return 0;
}
