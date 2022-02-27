/*

Livro Linguagem C Completa e Descomplicada - Cap. 6

6.7.1 - 4 ) Fa�a um programa que possua um array de nomne A que armazene seis n�meros
inteiros. O programa deve excutar os seguintes passos:

a) Atribua os seguintes valores a esse array: 1, 0, 5, -2, -5, 7.
b) Armazene em uma vari�vel a soma dos valores das posi��es A[0], A[1] e A[5] do array
e mostre na tela essa soma.
c) Modifique o array na posi��o 4, atribuindo a essa posi��o o valor 100.
d) Mostre na tela cada valor do array A, um em cada linha.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma, i;

    soma = A[0] + A[1] + A[5];

    printf("Soma  %d + %d + %d = %d", A[0], A[1], A[5], soma);

    A[4] = 100;

    printf("\nElementos do vetor A:");

    for(i=0; i<6; i++){
        printf("\nA[%d] = %d", i, A[i]);
    }

    printf("\n\n");

    system("pause");
    return 0;
}
