/*

Livro Linguagem C Completa e Descomplicada - Cap. 3

3.11 - 15 ) Fa�a um programa para ler um n�mero inteiro positivo de tr�s d�gitos.
Em seguida, calcule e mostre o n�mero formado pelos d�gitos invertidos
do n�mero lido. Exemplo:

N�mero lido = 123
N�mero gerado =  321

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
