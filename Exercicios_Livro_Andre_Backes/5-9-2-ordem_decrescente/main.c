/*

Livro Linguagem C Completa e Descomplicada - Cap. 5

5.9 - 2 ) Fa�a um programa que leia um n�mero inteiro positivo N e imprima todos
os n�meros naturais de 0 at� N em ordem decrescente.

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
