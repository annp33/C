/*

Livro Linguagem C Completa e Descomplicada - Cap. 5

5.9 - 20 ) Faça um programa que leia um valor inteiro e positivo N,
calcule e mostre o valor E, conforme a fórmula a seguir:

E = (1/1!) + (1/2!) + (1/3!) + ... + (1/N!)

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, fatorial=1;
    float e=0;

    printf("Entre com um valor inteiro e positivo para N: ");
    scanf("%d", &n);

    printf("\nE =");

    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            fatorial = fatorial * j;
        }

        e = e + (1.0/fatorial);
        fatorial = 1;

        if(i==n)
            printf(" 1/%d!", i);
        else
            printf(" 1/%d! + ", i);
    }

    printf(" = %f\n\n", e);

    system("pause");
    return 0;
}
