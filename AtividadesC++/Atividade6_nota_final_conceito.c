/*A nota final do estudando e calculado a partir de tr�s notas atribuidas respectivamente
a um trabalho de laborat�rio, a uma avalia��o semestral e a um exame final.
A m�dia das tr�s notas mencionadas anteriormente obdece as pesos a seguir:

| Nota | 						| peso |
trabalho de laborat�rio			|	2  |
Avalia��o semestral				|	3  |
Exame final						|	5  |

Fa�a um programa que receba as tres notas, calcule e mostre a m�dia ponderada
e o conceito que segue a tabela abaixo:

| M�dia ponderada |		| Conceito |
|	8,0 ~ 10,0	  |		|  	  A    |
|	7,0 ~ 8,0	  | 	|  	  B    |
|	6,0 ~ 7,0	  | 	|  	  C    |
|	5,0 ~ 6,0	  | 	|  	  D    |
|	0,0 ~ 5,0	  | 	|  	  E    |
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
	
	float ntrab, avsem, exfim, media;
	
	printf("Insira a nota do trabalho de laboratorio\n");
	scanf("%f", &ntrab);
	printf("Insira a nota da avaliacao semestral\n");
	scanf("%f", &avsem);
	printf("Insira a nota do exame final\n");
	scanf("%f", &exfim);
	
	media = (ntrab*2 + avsem*3 + exfim*5) / 10;
	
	printf("Sua media foi %.2f\n", media);
	
		if (media >= 8 && media <=10){
		printf("Sua nota foi: A");
		}
			if (media >= 7  && media < 8){
			printf("Sua nota foi: B");
			}
				if (media >= 6 && media < 7){
				printf("Sua nota foi: C");
				}
					if (media >= 5 && media < 6){
					printf("Sua nota foi: D");
					}
						if (media >= 0 && media < 5){
						printf("Sua nota foi: E");
						}
}
