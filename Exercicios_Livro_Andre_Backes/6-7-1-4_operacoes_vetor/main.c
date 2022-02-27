/*

Livro Linguagem C Completa e Descomplicada - Cap. 6

6.7.1 - 4 ) Faça um programa que possua um array de nomne A que armazene seis números
inteiros. O programa deve excutar os seguintes passos:

a) Atribua os seguintes valores a esse array: 1, 0, 5, -2, -5, 7.
b) Armazene em uma variável a soma dos valores das posições A[0], A[1] e A[5] do array
e mostre na tela essa soma.
c) Modifique o array na posição 4, atribuindo a essa posição o valor 100.
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
