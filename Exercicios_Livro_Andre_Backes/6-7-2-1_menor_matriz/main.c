/*

Livro Linguagem C Completa e Descomplicada - Cap. 6

6.7.2 - 1) Faça um programa que leia uma matriz de tamanho 3 x 3.
Imprima na tela o menor valor contido nessa matriz.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[3][3], i, j, menor;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Entre com o elemento da linha %d, coluna %d: ", i+1, j+1);
            scanf("%d", &num[i][j]);
        }
    }

    menor = num[0][0];

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(num[i][j] < menor)
                menor = num[i][j];
        }
    }

    printf("\nMenor: %d\n\n", menor);

    system("pause");
    return 0;
}
