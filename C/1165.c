#include <stdio.h>
#include <stdlib.h>

int main(){
int num,i,n,count,a;

scanf("%d\n",&n);

for(num = 1;num <= n; num++){
  scanf("%d\n",&a);
  count = 0;

for(i = 2; i <= a / 2;i++){
 if(a % i == 0){
   count++;
   break;
 }
}

if(count == 0 && a != 1){
  printf("%d eh primo\n",a);
}

else{
 printf("%d nao eh primo\n",a);
}
}
}
