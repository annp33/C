/*

Livro Linguagem C Completa e Descomplicada - Cap. 3

3.11 - 15 ) Faça um programa para ler um número inteiro positivo de três dígitos.
Em seguida, calcule e mostre o número formado pelos dígitos invertidos
do número lido. Exemplo:

Número lido = 123
Número gerado =  321

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, unidade, dezena, centena;

    printf("Entre com um numero inteiro positivo de tres digitos: ");
    scanf("%d", &num);

    centena = num/100;

    dezena = (num%100)/10;

    unidade = (num%100)%10;

    printf("\n%d%d%d\n\n", unidade,dezena,centena);

    system("pause");
    return 0;
}
