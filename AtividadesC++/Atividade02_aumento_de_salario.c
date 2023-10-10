#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	float salario, porcentagem, aumento;

	printf("Informe o salario:\n");
	scanf ("%f", &salario);
	printf("Informe a porcentual de aumento:\n");
	scanf ("%f", &aumento);
	porcentagem = (salario / 100) * aumento;
	porcentagem = salario + porcentagem;

	printf("Valor de aumento: %0.f%%\n", aumento);
	printf("Valor salario mais porcentagem: %.2f.\n", porcentagem);
}
