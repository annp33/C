/*

Livro Linguagem C Completa e Descomplicada - Cap. 4

4.7 - 3 ) Fa�a um programa que leia um n�mero inteiro e verifique se esse n�mero � par ou �mpar.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Entre com um numero inteiro: ");
    scanf("%d", &num);

    if(num%2 == 0)
        printf("\nNumero PAR\n\n");
    else
        printf("\nNumero IMPAR\n\n");

    system("pause");
    return 0;
}
