/*

Livro Linguagem C Completa e Descomplicada - Cap. 5

5.9 - 18 ) Fa�a um programa que receba um n�mero inteiro maior que 1
e verifique se o n�mero fornecido � primo ou n�o.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, primo=0;

    printf("Entre com um numero inteiro maior que 1: ");
    scanf("%d", &num);

    i = num/2; // Nenhum divisor de um n�mero � maior que sua metade.

    while(i > 1){
        if(num%i == 0)
            primo++;
        i--;
    }

    if(primo==0 && num!=1 && num!=0)
        printf("\nO numero e primo\n\n");
    else
        printf("\nO numero NAO e primo\n\n");

    system("pause");
    return 0;
}
