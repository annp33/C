/*

Livro Linguagem C Completa e Descomplicada - Cap. 4

4.7 - 3 ) Faça um programa que leia um número inteiro e verifique se esse número é par ou ímpar.

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
