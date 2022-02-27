/*

Livro Linguagem C Completa e Descomplicada - Cap. 5

5.9 - 11 ) Fa�a um algoritmo que leia um n�mero positivo e imprima seus divisores.
Exemplo: os divisores do n�mero 66 s�o: 1, 2, 3, 6, 11, 22, 33 e 66.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, divisor;

    printf("Entre com um numero inteiro: ");
    scanf("%d", &num);

    printf("\nOs divisores de %d sao: 1", num);

    for(i=num/2; i>0; i--){
        divisor = num / i;

        if(num%i == 0)
            printf(" %d", divisor);
    }

    printf("\n\n");

    system("pause");
    return 0;
}
