#include <stdio.h>
#include <string.h>

int main(void) {
int N;
char numero[10];

scanf("%d", &N);

while(N--) {
	scanf("%s", numero);

	if(strlen(numero) == 5) {
		printf("3\n");
	}
  else {
		if((numero[0] == 'o' && numero[1] == 'n') ||
			(numero[1] == 'n' && numero[2] == 'e') ||
			(numero[0] == 'o' && numero[2] == 'e')) {
			printf("1\n");
		}
    else {
			printf("2\n");
		}
	}
}

return 0;
}
