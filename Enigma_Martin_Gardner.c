/*Enigma de Martin Gardner

Persist�ncia de um n�mero � o n�mero de passos necess�rios para reduzi-lo a um �nico
d�gito multiplicando todos os seus algarismos para obter um segundo n�mero, depois
multiplicando todos os d�gitos deste n�mero para se obter um terceiro n�mero, e assim
por diante, at� que um n�mero de um d�gito � obtido. Por exemplo, 77 tem uma persist�ncia de quatro,
porque requer quatro etapas para reduzi-lo a um d�gito: 77-49-36-18-8.
O menor n�mero de persist�ncia 1 � 10, o menor de persist�ncia 2 � 25,
o menor de persist�ncia 3 � 39, e o menor de persist�ncia 4 � 77.*/

/*Crie um algoritmo em C, que obtenha o menor n�mero de persist�ncia cinco*/

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
        printf("O menor n�mero com persist�ncia %d �: %d\n", Cont, NumPersist);
    }
    
    return 0;
}
