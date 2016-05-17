#include <stdio.h>
#include <conio.h>

int main() {
	
	float salario, novo_salario;
	
	printf("Informe o salario do funcionario\n");
	scanf("f", &salario);
	
	if (salario < 300){
		novo_salario = salario + ((salario/100)*35);
		printf("O novo salario e: %f", novo_salario);
	}
	
	else {
		novo_salario = salario + ((salario/100)*15);
		printf("O novo salario e: %f", novo_salario);
	}
	return 0;
}
