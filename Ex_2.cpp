#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int n1, n2, n3;
	
	printf("Informe o primeiro numero\n");
	scanf("%i", &n1);
	
	printf("Informe o segundo numero\n");
	scanf("%i", &n2);
	
	printf("Informe o terceiro numero\n");
	scanf("%i", &n3);
		
		if ((n1 > n2) and (n1 > n3)){
			printf("O primeiro numero e o maior");
		}
		
			else if ((n2 > n1) and (n2 > n3)){
				printf("O segundo numero e o maior");
			}
			
				else {
					printf("O terceiro numero e o maior");
				}
		
			
	
	return 0;
}
