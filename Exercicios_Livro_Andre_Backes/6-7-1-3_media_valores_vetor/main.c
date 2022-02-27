/*

Livro Linguagem C Completa e Descomplicada - Cap. 6

6.7.1 - 3 ) Faça um programa que leia cinco valores e os armazene em um vetor.
Em seguida, mostre todos os valores lidos juntamente com a média dos valores.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float num[5], soma =0, media;

    for(i=0; i<5; i++){
        printf("Entre com um valor: ");
        scanf("%f", &num[i]);
        soma = soma + num[i];
    }

    media = soma/5;

    printf("\nValores digitados: ");

    for(i=0; i<5; i++){
        if(i==0)
            printf("{ %0.2f,", num[i]);
        if(i>0 && i<4)
            printf(" %0.2f,", num[i]);
        if(i==4)
            printf(" %0.2f }\n", num[i]);
    }

    printf("Media: %0.2f\n\n", media);

    system("pause");
    return 0;
}
