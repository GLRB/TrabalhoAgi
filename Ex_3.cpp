#include <stdio.h>
#include <conio.h>
int main() {
	float n1, n2; 
	int escolha, op;
	
	printf("Informe o primeiro numero\n");
	scanf("%f", &n1);
	
	printf("Informe o segundo numero\n");
	scanf("%f", &n2);
	
	printf("Escolha uma das opcoes a seguir: \n");
	printf("1 - Media entre os numeros digitados\n");
	printf("2 - Diferenca do maior entre o menor\n");
	printf("3 - Produto entre os numeros digitados\n");
	printf("4 - Divisao do primeiro pelo segundo\n");
	
	scanf("%i", &escolha);	
	switch (escolha){
		
		
		case 1:
			printf("A media entre os numeros e : %f", (n1+n2) / 2);
			break;
			
			case 2:
				if (n1 > n2){
					printf("A diferenca do maior pro menor e: %f", n1 - n2);
				}
				else{
					printf("A diferenca do maior pro menor e: %f", n2 - n1);
				}
				break;
				
				case 3:
					printf("O produto entre os dois numeros e: %f", n1 * n2);
					break;
					
					case 4: 
					printf("A divisao do primeiro pelo segundo e: %f", n1 / n2);
					break;
	}
	
	return 0;
}
	

