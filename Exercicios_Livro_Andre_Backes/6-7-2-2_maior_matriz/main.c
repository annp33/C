/*

Livro Linguagem C Completa e Descomplicada - Cap. 6

6.7.2 - 2) Faça um programa que leia uma matriz de tamanho 4 x 4. Imprima
na tela o maior valor contido nessa matriz e a sua localização (linha e coluna).

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[4][4], i, j, maior, linha=0, coluna=0;

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("Entre com o valor para a linha %d, coluna %d: ", i+1, j+1);
            scanf("%d", & num[i][j]);
        }
    }

    maior = num[0][0];

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(num[i][j] > maior){
                maior = num[i][j];
                linha = i + 1;
                coluna = j + 1;
            }
        }
    }

    printf("\nMaior: %d\nLinha %d, Coluna %d\n\n", maior, linha, coluna);

    system("pause");
    return 0;
}
