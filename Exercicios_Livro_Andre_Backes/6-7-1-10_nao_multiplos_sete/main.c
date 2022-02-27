/*

Livro Linguagem C Completa e Descomplicada - Cap. 6

6.7.1 - 10) Faça um programa que preencha um vetor de tamanho 100
com os 100 primeiros números naturais que não são múltipos de 7.
Ao final, imprima esse vetor na tela.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[100], i, contador=0;

    printf("Numeros Naturais NAO multiplos de 7:\n");

    for(i=0; contador<100; i++){
        if(i%7 != 0 && i>7){
            num[contador] = i;
            if(contador%10 == 0 && contador != 0){
                printf(" %d\n", num[contador]);
            }else{
                printf(" %d", num[contador]);
            }
            contador++;
        }
    }

    printf("\n\n");

    system("pause");
    return 0;
}
