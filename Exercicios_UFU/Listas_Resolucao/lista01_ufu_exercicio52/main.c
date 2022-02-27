/*

Universidade Federal de Uberlândia - UFU
Faculdade de Computação - FACOM
Lista de exercícios de programação em linguagem C
Exercícios: variáveis e express˜oes

52. Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido
proporcionalmente ao valor que cada deu para a realização da aposta. Faça um programa
que leia quanto cada apostador investiu, o valor do prêmio, e imprima quanto cada um
ganharia do prêmio com base no valor investido.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, premio, x, y, z;

    printf("Entre com o valor investido pelo primeiro apostador: ");
    scanf("%f", &a);

    printf("Entre com o valor investido pelo segundo apostador: ");
    scanf("%f", &b);

    printf("Entre com o valor investido pelo terceiro apostador: ");
    scanf("%f", &c);

    printf("Entre com o valor do premio: ");
    scanf("%f", &premio);

    x = premio * (a/(a+b+c));

    y = premio * (b/(a+b+c));

    z = premio * (c/(a+b+c));

    printf("\nApostador 1 = R$ %.2f\nApostador 2 = R$ %.2f\nApostador 3 = R$ %.2f\n\n", x, y, z);

    system("pause");
    return 0;
}
