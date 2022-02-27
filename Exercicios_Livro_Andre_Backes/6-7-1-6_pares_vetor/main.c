/*

Livro Linguagem C Completa e Descomplicada - Cap. 6

6.7.1 - 6 ) Escreva um programa que leia do teclado um vetor de 10 posições.
Escreva na tela quentos valores pares foram armazenados nesse vetor.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10], i, pares=0;

    for(i=0; i<10; i++){
        printf("Entre com um numero: ");
        scanf("%d", &num[i]);

        if(num[i]%2 == 0)
            pares++;
    }

    printf("\nNumeros pares digitados: %d\n\n", pares);

    system("pause");
    return 0;
}
