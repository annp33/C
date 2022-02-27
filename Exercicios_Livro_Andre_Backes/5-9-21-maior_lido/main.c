/*

Livro Linguagem C Completa e Descomplicada - Cap. 5

5.9 - 21 ) Escreva um programa que leia certa quantidade de números, imprima
o maior deles e quantas vezes o maior número foi lido. A quantidade de números a serem
lidos deve ser fornecida pelo usuário.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i=1, contador=1;
    float num, maior;

    printf("Entre com a quantidade de numeros a serem lidos: ");
    scanf("%d", &n);

    printf("Entre com um numero: ");
    scanf("%f", &num);

    maior =  num;

    while(i < n){
        printf("Entre com um numero: ");
        scanf("%f", &num);

        if(num == maior){
            contador++;
        }

        if(num > maior){
            maior = num;
            contador = 1;
        }

        i++;
    }

    printf("\nMaior: %f\nLeituras: %d vezes\n\n", maior, contador);

    system("pause");
    return 0;
}
