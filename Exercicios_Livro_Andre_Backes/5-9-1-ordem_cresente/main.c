/*

Livro Linguagem C Completa e Descomplicada - Cap. 5

5.9 - 1 ) Fa�a um programa que leia um n�mero inteiro positivo N e imprima todos
os n�meros naturais de 0 at� N em ordem crescente.

*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i;

    printf("Entre com um numero inteiro positivo: ");
    scanf("%d", &num);

    printf("\n");

    for(i=0; i<=num; i++) // Em C n�o posso declarar a vari�vel dentro do for, s� posso atribuir valor.
        printf("%d ",i);

     printf("\n\n");

    system("pause");
    return 0;
}
