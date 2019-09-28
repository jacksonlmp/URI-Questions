#include <stdio.h>
#include <string.h>
int main(){

int a,b,c;
char aa[]="tesoura", bb[]="papel", cc[]="pedra", dd[]="lagarto", ee[]="Spock";
char a1[10],a2[10];
scanf("%d",&a);

for(b=1; b<=a; b++){
  scanf("%s%s", a1,a2);

  if(strcmp(a1,a2) == 0){
    printf("Caso #%d: De novo!\n", b);
    }
  else if(strcmp(a1,aa) == 0){
    if((strcmp(a2,bb) == 0) || (strcmp(a2,dd) == 0)){
      printf("Caso #%d: Bazinga!\n", b);
    }
    else if((strcmp(a2,cc) == 0) || (strcmp(a2,ee) == 0)){
      printf("Caso #%d: Raj trapaceou!\n", b);
    }
    }

    else if(strcmp(a1,bb) == 0){
      if((strcmp(a2,cc) == 0) || (strcmp(a2,ee) == 0)){
        printf("Caso #%d: Bazinga!\n", b);
      }
      else if((strcmp(a2,aa) == 0) || (strcmp(a2,dd) == 0)){
        printf("Caso #%d: Raj trapaceou!\n", b);
      }
      }

    else if(strcmp(a1,cc) == 0) {
      if((strcmp(a2,aa) == 0) || (strcmp(a2,dd) == 0)){
        printf("Caso #%d: Bazinga!\n", b);
        }
      else if((strcmp(a2,bb) == 0) || (strcmp(a2,ee) == 0)){
        printf("Caso #%d: Raj trapaceou!\n", b);
      }
      }

    else if(strcmp(a1,dd) == 0){
      if((strcmp(a2,bb) == 0) || (strcmp(a2,ee) == 0)){
        printf("Caso #%d: Bazinga!\n", b);
       }
      else if((strcmp(a2,cc) == 0) || (strcmp(a2,aa) == 0)){
        printf("Caso #%d: Raj trapaceou!\n", b);
      }
      }

    else if(strcmp(a1,ee) == 0){
      if((strcmp(a2,aa) == 0) || (strcmp(a2,cc) == 0)){
        printf("Caso #%d: Bazinga!\n", b);
        }
      else if((strcmp(a2,bb) == 0) || (strcmp(a2,dd) == 0)){
        printf("Caso #%d: Raj trapaceou!\n", b);
      }
      }
  }
return 0;
}
