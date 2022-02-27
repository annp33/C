/*

Universidade Federal de Uberl�ndia - UFU
Faculdade de Computa��o - FACOM
Lista de exerc�cios de programa��o em linguagem C
Exerc�cios: vari�veis e express�oes

52. Tr�s amigos jogaram na loteria. Caso eles ganhem, o pr�mio deve ser repartido
proporcionalmente ao valor que cada deu para a realiza��o da aposta. Fa�a um programa
que leia quanto cada apostador investiu, o valor do pr�mio, e imprima quanto cada um
ganharia do pr�mio com base no valor investido.

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
