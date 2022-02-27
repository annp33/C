/*

Universidade Federal de Uberl�ndia - UFU
Faculdade de Computa��o - FACOM
Lista de exerc�cios de programa��o em linguagem C
Exerc�cios: vari�veis e express�oes

53. Fa�a um programa para ler as dimens�oes de um terreno (comprimento c e largura l),
bem como o pre�o do metro de tela p. Imprima o custo para cercar este mesmo terreno
com tela.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c, l, p, custo;

    printf("Entre com o comprimento c do terreno: ");
    scanf("%f", &c);

    printf("Entre com a largura l do terreno: ");
    scanf("%f", &l);

    printf("Entre com o preco do metro de tela p: ");
    scanf("%f", &p);

    custo = (c*l)*p;

    printf("\nO custo para cercar esse terreno e de: R$ %0.2f\n\n", custo);

    system("pause");
    return 0;
}
