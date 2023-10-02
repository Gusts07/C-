#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
 int num1, num2, num3, num4, soma;
 	printf("Escreva um numero:\n");
 	scanf("%d", &num1);
	printf("Escreva um segundo numero:\n");
	scanf("%d", &num2);
	printf("Escreva um terceiro numero:\n");
	scanf("%d", &num3);
	printf("Escreva um quarto numero:\n");
	scanf("%d", &num4);
	soma = num1 + num2 + num3 + num4;
	printf("Soma dos numeros: %d", soma);
System("pause");
}
