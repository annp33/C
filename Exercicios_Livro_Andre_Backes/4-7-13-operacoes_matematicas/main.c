/*

Livro Linguagem C Completa e Descomplicada - Cap. 4

4.7 - 13 ) Fa�a um programa que mostre ao usu�rio um menu com quatro op��es de
opera��es matem�ticas (as opera��es b�sicas, por exemplo). O usu�rio escolhe uma
das op��es e o seu programa pede dois valores num�ricos e realiza a opera��o,
mostrando o resultado.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    float num1, num2, resultado;

    printf("Escolha a operacao:\n(1) Soma\n(2) Subtracao\n(3) Multiplicacao\n(4) Divisao\n");
    scanf("%d", &opcao);

    printf("\nEntre com dois numeros:\n");
    scanf("%f %f", &num1, &num2);

    switch(opcao){
        case 1:
            resultado = num1 + num2;
            break;

        case 2:
            resultado = num1 - num2;
            break;

        case 3:
            resultado = num1 * num2;
            break;

        case 4:
            resultado = num1 / num2;
            break;

        default:
            printf("\nOPERACAO INVALIDA\n\n");
    }

    printf("\nO resultado da operacao e: %f\n\n", resultado);

    system("pause");
    return 0;
}
