/*

Livro Linguagem C Completa e Descomplicada - Cap. 4

4.7 - 13 ) Faça um programa que mostre ao usuário um menu com quatro opções de
operações matemáticas (as operações básicas, por exemplo). O usuário escolhe uma
das opções e o seu programa pede dois valores numéricos e realiza a operação,
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
