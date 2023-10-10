#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
float num1, num2;
	printf("Digite um numero\n");
	scanf("%f", &num1);
	printf("Digite outro numero \n");
	scanf("%f", &num2);
	
		if (num1 > num2){
			printf("O numero %.0f e maior que %.0f.\n", num1, num2);}
			
		if (num1 < num2){
			printf("O numero %.0f e maior que %.0f.\n", num2, num1);}
		
		if (num1 == num2){
			printf("Os numeros sao iguais\n");}
}
