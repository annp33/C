/*

Universidade Federal de Uberlândia - UFU
Faculdade de Computação - FACOM
Lista de exercícios de programação em linguagem C
Exercícios: variáveis e express˜oes

53. Faça um programa para ler as dimens˜oes de um terreno (comprimento c e largura l),
bem como o preço do metro de tela p. Imprima o custo para cercar este mesmo terreno
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
