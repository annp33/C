/*

Livro Linguagem C Completa e Descomplicada - Cap. 6

6.7.1 - 12) Fa�a um programa que leia um vetor de 10 posi��es.
Verifique se existem valores iguais e os escreva na tela.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10], i, j, contador=0, contador2=0;

    for(i=0; i<10; i++){
        printf("Entre com um valor: ");
        scanf("%d", &num[i]);
    }

    printf("\nNumeros iguais:");

    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            if(num[i]==num[j] && i>j)
                contador++;
            if(num[i]==num[j] && i<j)
                contador2++;
        }

        if(contador==0 && contador2>0){
            printf("\n%d - %d aparicoes", num[i], contador2+1);
        }
        // contador2+1 porque ele n�o conta o n�mero que est� sendo testado no la�o for,
        // somente as demais apari��es desse n�mero no vetor.

        contador = 0;
        contador2 = 0;
    }

    printf("\n\n");

    system("pause");
    return 0;
}
