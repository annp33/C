/*

Livro Linguagem C Completa e Descomplicada - Cap. 6

6.7.1 - 7 ) Faça um programa que receba do usuário um vetor X com 10 posições.
Em seguida deverão ser impressos o maior e o menor elemento desse vetor.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float X[10], maior, menor;
    int i;

    maior = X[0];
    menor = X[0];

    for(i=0; i<10; i++){
        printf("Entre com um numero: ");
        scanf("%f", &X[i]);

        if(X[i] > maior)
            maior = X[i];

        if(X[i] < menor)
            menor = X[i];
    }

    printf("\nMenor numero: %0.2f\nMaior numero: %0.2f\n\n", menor, maior);

    system("pause");
    return 0;
}
