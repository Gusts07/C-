#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

int cronoseg, horas, minutos, segundos;

	printf("Digite a quantidade de segundos:\n");
	scanf ("%d", &cronoseg);
	
	horas = cronoseg / 3600;
	cronoseg = cronoseg - (3600*horas);
	minutos = cronoseg / 60;
	segundos = cronoseg - (60*minutos);
	
	printf("%d H %d MIN %d SEG", horas, minutos, segundos);
}
