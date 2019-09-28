#include <stdio.h>
#include <stdlib.h>

int main(){
double n1, n2, n3, n4, media, last;

scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

media = (n1*2 + n2*3 + n3*4 + n4*1)/10;

printf("Media: %.1lf\n", media);

if(media >= 7.0){
  printf("Aluno aprovado.\n");
}
else if(media >= 5.0){
  printf("Aluno em exame.\n");
  scanf("%lf", &last);
  printf("Nota do exame: %.1f\n", last);

  if(last + media/2.0 > 5.0){
    printf("Aluno aprovado.\n");
  }
else{
  printf("Aluno reprovado.\n");
}
  printf("Media final: %.1f\n", (last+media)/2.0);
}
else{
  printf("Aluno reprovado.\n");
}
}
