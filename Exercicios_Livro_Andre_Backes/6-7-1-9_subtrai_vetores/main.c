/*

Livro Linguagem C Completa e Descomplicada - Cap. 6

6.7.1 - 9) Faça um programa que receba do usuário dois arrays, A e B, com 10
números inteiros cada. Crie um novo array C calculando C = A - B. Mostre na
tela os dados do array C.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10], B[10], C[10], i;

    for(i=0; i<10; i++){
        printf("Entre um valor para o vetor A: ");
        scanf("%d", &A[i]);
    }

    printf("\n");

    for(i=0; i<10; i++){
        printf("Entre um valor para o vetor B: ");
        scanf("%d", &B[i]);
    }

    printf("\nVetor C:");

    for(i=0; i<10; i++){
        C[i] = A[i] - B[i];
        printf(" %d", C[i]);
    }

    printf("\n\n");

    system("pause");
    return 0;
}
