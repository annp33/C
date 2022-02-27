/*

Livro Linguagem C Completa e Descomplicada - Cap. 5

5.9 - 10 ) Faça um programa que leia 10 inteiros positivos,
ignorando não positivos, e imprima sua média.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i=0, soma=0;
    float media;

    while(i<10){
        printf("Entre com um numero inteiro positivo: ");
        scanf("%d", &num);

        printf("\n");

        if(num > 0){
            soma = soma + num;
            i++;
        }
    }

    media = soma/10.0;

    printf("\nA media dos numeros positivos digitados e: %f\n\n", media);

    system("pause");
    return 0;
}
