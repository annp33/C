/*

Livro Linguagem C Completa e Descomplicada - Cap. 5

5.9 - 9 ) Escreva um programa que leia 10 números e escreva o menor
valor lido e o maior valor lido.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num, maior, menor, i;

        printf("Entre com o numero: ");
        scanf("%f", &num);

        maior = num;
        menor = num;

    for(i=1; i<=9; i++){
        printf("Entre com o numero: ");
        scanf("%f", &num);

        if(num > maior)
            maior = num;

        if(num < menor)
            menor = num;
    }

    printf("\nMaior: %f e Menor: %f\n\n", maior, menor);

    system("pause");
    return 0;
}
