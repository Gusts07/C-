/*Enigma de Martin Gardner

Persistência de um número é o número de passos necessários para reduzi-lo a um único
dígito multiplicando todos os seus algarismos para obter um segundo número, depois
multiplicando todos os dígitos deste número para se obter um terceiro número, e assim
por diante, até que um número de um dígito é obtido. Por exemplo, 77 tem uma persistência de quatro,
porque requer quatro etapas para reduzi-lo a um dígito: 77-49-36-18-8.
O menor número de persistência 1 é 10, o menor de persistência 2 é 25,
o menor de persistência 3 é 39, e o menor de persistência 4 é 77.*/

/*Crie um algoritmo em C, que obtenha o menor número de persistência cinco*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int CalcPersist(int Number) {
    int Persist = 0;
    while (Number >= 10) {
        int Result = 1;
        while (Number > 0) {
            Result *= Number % 10;
            Number /= 10;
        }
        Number = Result;
        Persist++;
    }
    return Persist;
}

int main() {
    setlocale(LC_ALL, "portuguese");
    int Cont = 1;
    
    for (Cont = 1; Cont <= 9; Cont++) {
        int NumPersist = 1;
        while (CalcPersist(NumPersist) != Cont) {
            NumPersist++;
        }
        printf("O menor número com persistência %d é: %d\n", Cont, NumPersist);
    }
    
    return 0;
}
