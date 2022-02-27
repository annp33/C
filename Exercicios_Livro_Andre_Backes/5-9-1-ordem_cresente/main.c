/*

Livro Linguagem C Completa e Descomplicada - Cap. 5

5.9 - 1 ) Faça um programa que leia um número inteiro positivo N e imprima todos
os números naturais de 0 até N em ordem crescente.

*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i;

    printf("Entre com um numero inteiro positivo: ");
    scanf("%d", &num);

    printf("\n");

    for(i=0; i<=num; i++) // Em C não posso declarar a variável dentro do for, só posso atribuir valor.
        printf("%d ",i);

     printf("\n\n");

    system("pause");
    return 0;
}
