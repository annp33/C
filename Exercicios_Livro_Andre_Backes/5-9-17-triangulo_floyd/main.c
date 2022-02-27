/*

Livro Linguagem C Completa e Descomplicada - Cap. 5

5.9 - 17 ) Escreva um programa que leia um número inteiro positivo N e
em seguida imprima N linhas do chamado triângulo de Floyd:

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, linha, i, num=1;

    printf("Entre com o numero de linhas do triangulo de Floyd: ");
    scanf("%d", &n);

    for(linha=0; linha<=n; linha++){
        for(i=0; i<linha; i++){
            printf(" %d", num);
            num++;
        }
        printf("\n");
    }

    printf("\n\n");

    system("pause");
    return 0;
}
