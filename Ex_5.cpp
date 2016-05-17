#include <stdio.h>
#include <conio.h>


int main() {
	
	float salario, novo_salario;
	
	printf("Informe o salario do funcionario\n");
	scanf("%f", &salario);
	
	if (salario < 500){
		novo_salario = salario + (salario * 30)/100);
		printf("O novo salario do funcionario e :%f", &novo_salario);
	}
	
	else{
		printf("Salario nao reajustado");
		}
	
	return 0;
}
