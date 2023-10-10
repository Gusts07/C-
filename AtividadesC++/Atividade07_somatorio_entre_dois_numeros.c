/*Desenvolva um algoritmo que some todos os numeros
inteiros compreendidos entre 1 a 10 (inclusive).*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");

int i, soma;
	soma = 0;
	for (i = 1; i <= 10; i++){
	soma = soma + i;}
	printf ("%d", soma);
}
