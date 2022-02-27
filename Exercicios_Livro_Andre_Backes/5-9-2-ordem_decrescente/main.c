/*

Livro Linguagem C Completa e Descomplicada - Cap. 5

5.9 - 2 ) Faça um programa que leia um número inteiro positivo N e imprima todos
os números naturais de 0 até N em ordem decrescente.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Entre com um numero inteiro positivo: ");
    scanf("%d", &num);

    printf("\n");

    while(num >= 0){
        printf("%d ", num);
        num--;
    }

    printf("\n\n");

    system("pause");
    return 0;
}
