/*Desenvolva um algoritmo que simule uma calculadora.
Voc� deve dar a op��o de o usu�rio escolher entre:
1-adi��o, 2-subtra��o, 3-multiplica��o, 4-divis�o.
O usu�rio s� consiguir� processar dois n�meros inteiros por vez.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	float num1, num2, adc, op;
	printf("Calculadora\n");
	printf("Escolha uma opcao\n");
	printf("1-Adicao \n2-Subtracao \n3-multiplicacao \n4-Divisao \n");
	scanf("%f", &op);
		if (op == 1){
			printf("CALCULADORA - FUNCAO ADICAO\n");
			printf("Digite um numero\n");
			scanf("%f", &num1);
			printf("digite outro numero\n");
			scanf("%f", &num2);
				adc = num1 + num2;
			printf("\n%.0f + %.0f = %.0f\n", num1, num2, adc);}
			
		if (op == 2){
					printf("CALCULADORA - FUNCAO SUBTRACAO\n");
			printf("Digite um numero\n");
			scanf("%f", &num1);
			printf("digite outro numero\n");
			scanf("%f", &num2);
				adc = num1 - num2;
			printf("\n%.0f - %.0f = %.0f\n", num1, num2, adc);}
				
		if (op == 3){
			printf("CALCULADORA - FUNCAO MULTIPLICACAO\n");
			printf("Digite um numero\n");
			scanf("%f", &num1);
			printf("digite outro numero\n");
			scanf("%f", &num2);
				adc = num1 * num2;
			printf("\n%.0f * %.0f = %.0f\n", num1, num2, adc);}
			
		if (op == 4){
			printf("CALCULADORA - FUNCAO DIVISAO\n");
			printf("Digite um numero\n");
			scanf("%f", &num1);
			printf("digite outro numero\n");
			scanf("%f", &num2);
				adc = num1 / num2;
			printf("\n%.0f / %.0f = %.0f\n", num1, num2, adc);}}
