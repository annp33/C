/*

Livro Linguagem C Completa e Descomplicada - Cap. 6

6.7.2 - 3) Faça um programa que declare uma matriz de tamanho 5 X 5.
Preencha com 1 a diagonal principal e com 0 os demais elementos. Ao
final, escreva a matriz obtida na tela.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[5][5], i, j;

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(i == j)
                matriz[i][j] = 1;
            else
                matriz[i][j] = 0;
        }
    }

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(j == 4)
                printf("%d\n", matriz[i][j]);
            else
                printf("%d ", matriz[i][j]);
        }
    }

    printf("\n");

    system("pause");
    return 0;
}
