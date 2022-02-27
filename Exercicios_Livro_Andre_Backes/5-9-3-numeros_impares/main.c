/*

Livro Linguagem C Completa e Descomplicada - Cap. 5

5.9 - 3 ) Faça um programa que leia um número inteiro N e depois
imprima os N primeiros números naturais ímpares.


*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, impar, cont, i=0;

    printf("Entre com um numero inteiro positivo: ");
    scanf("%d", &num);

    printf("\n");

    for(cont=1; cont<=num; cont++){
        impar = 2*i + 1;
        printf("%d ", impar);
        i++;
    }

    printf("\n\n");

    system("pause");
    return 0;
}
