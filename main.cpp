#include <stdio.h>
#include <conio.h>

int main() {
	
	float saldo, credito;
	
	printf("Informe o saldo do funcionario: ");
	scanf("%f", &saldo);
	
	if (saldo > 400){
		credito = saldo + ((saldo/100) * 30);
		printf("O credito disponivel e: %f", credito);
	}
		else if ((saldo < 400) && (saldo > 300)){
			credito = saldo + ((saldo/100) *25);
			printf("O credito disponivel e: %f", credito);
		}
		
			else if ((saldo < 300) && (saldo > 200)){
			credito = saldo + ((saldo/100) *20);
			printf("O credito disponivel e: %f", credito);
		}
		
				else if (saldo < 200){
					credito = saldo + ((saldo/100) *10);
					printf("O credito disponivel e: %f", credito);
				}
		
	return 0;
}
