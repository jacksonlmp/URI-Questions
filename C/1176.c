#include <stdio.h>
#include <stdlib.h>

int main(){
long long int n, n1, n2, next;
int i, j, c;

scanf("%i", &j);

for(i = 1; i <= j; i++, n1 = 0, n2 = 1){
  scanf("%lli", &n);
  n += 1;

  for(c = 0; c < n; c++){
    if(c <= 1){
      next = c;
    }
    else{
      next = n1 + n2;
      n1 = n2;
      n2 = next;
    }
  }
  printf("Fib(%lli) = %lli\n",n - 1, next);
}
}
