/*Desenvolva um algoritmo que mostre os 8 primeiros números da sequência de fibonachi
0, 1, 1, 2, 3, 5 , 8, 13, 21, 34, 55...*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argv, char *argc){
	setlocale(LC_ALL, "Portuguese");
	int seq_fibonacci, add, num_atual;
	seq_fibonacci = 1;
	add = 0;
	printf("%d %d ", add, seq_fibonacci);
	while (seq_fibonacci < 55){
		num_atual = seq_fibonacci + add;
		add = seq_fibonacci;
		seq_fibonacci = num_atual;
		printf(" %d ", num_atual);
	}
}
