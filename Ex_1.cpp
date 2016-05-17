#include <stdio.h>
#include <stdlib.h>

int main() {
		int n1, n2;
		
		printf("Informe o primeiro numero");
		scanf("%i", &n1);
		
		printf("Informe o segundo numero");
		scanf("%i", &n2);
		
		if (n1 > n2) {
			printf("O primeiro numero informado é o maior");
		}
		
		else {
			printf("O segundo numero informado é o maior");
		}
	return 0;
}
