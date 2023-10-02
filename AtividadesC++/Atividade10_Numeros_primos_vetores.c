#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
    setlocale(LC_ALL, "portuguese");

int x, i, cont;
printf("Insira um número inteiro\n");
scanf("%d", &x);
    cont = 0;
    for (i=1; i<=x; i++){
        if(x % i == 0)
            cont++;
    }
            if (cont == 2){
            printf("%d é primo. \n", x);
			}
            else {
			printf("%d não é primo. \n", x);
			}
}
