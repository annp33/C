/*

Universidade Federal de Uberl�ndia - UFU
Faculdade de Computa��o - FACOM
Lista de exerc�cios de programa��o em linguagem C
Exerc�cios: vari�veis e express�oes

47. Leia um numero inteiro de 4 digitos (de 1000 a 9999) e imprima 1 digito por linha.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, milhar, centena, dezena, unidade;

    printf("Entre com um numero inteiro de 4 digitos (de 1000 a 9999): ");
    scanf("%d", &num);

    milhar = num/1000;

    centena = (num%1000)/100;

    dezena = ((num%1000)%100)/10;

    unidade = ((num%1000)%100)%10;

    printf("\nmilhar = %d\ncentena = %d\ndezena = %d\nunidade = %d\n\n", milhar, centena, dezena, unidade);

    system("pause");
    return 0;
}
