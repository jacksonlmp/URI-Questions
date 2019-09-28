#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
int n, a, b, i, j;
char um[50], dois[50];

scanf("%i", &n);

for(i = 0; i < n; i++){
  scanf("%i %i", &um, &dois);
  a = 0;
  b = 0;
}

  for(i = j; j < 50; j++){
    if(um[j] == '\0'){
      a = 1;
    }
    if(dois[j] == '\0'){
      b = 1;
    }
    if(a == 1 && b == 1){
      break;
    }
    if(a == 0){
      printf("%c", um[j]);
    }
    if(b == 0){
      printf("%c", dois[j]);
    }
    printf("\n");
  }

}
