/*

Universidade Federal de Uberlândia - UFU
Faculdade de Computação - FACOM
Lista de exercícios de programação em linguagem C
Exercícios: variáveis e express˜oes

51. Escreva um programa que leia as coordenadas x e y de pontos no R2
e calcule sua distância da origem (0,0).

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float distancia, x, y;

    printf("Entre com o valor de x: ");
    scanf("%f", &x);

    printf("Entre com o valor de y: ");
    scanf("%f", &y);

    distancia = sqrt(pow(x,2)+pow(y,2));

    printf("\nA distancia do ponto (%.2f,%.2f) da origem (0,0) e igual a: %.2f\n\n", x, y, distancia);

    system("pause");
    return 0;
}
