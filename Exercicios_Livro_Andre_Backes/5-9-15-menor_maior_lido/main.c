/*

Livro Linguagem C Completa e Descomplicada - Cap. 5

5.9 - 15 ) Elabore um programa que faça a leitura de vários números inteiros até que
se digite um número negativo. O programa tem de retornar o maior e o menor número lido.

*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, maior, menor;

    printf("Entre com um numero inteiro: ");
    scanf("%d", &num);

    maior = num;
    menor = num;

    while(num>=0){
        printf("Entre com um numero inteiro: ");
        scanf("%d", &num);

        if(num>maior)
            maior = num;

        if(num<menor && num>=0)
            menor = num;

    }

    printf("\nMaior numero positivo: %d\nMenor numero positivo: %d\n\n", maior, menor);

    system("pause");
    return 0;
}
