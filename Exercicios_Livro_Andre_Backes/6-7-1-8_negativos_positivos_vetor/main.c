/*

Livro Linguagem C Completa e Descomplicada - Cap. 6

6.7.1 - 8) Faça um programa que preencha um vetor com 10 números reais.
Em seguida, calcule e mostre na tela a quantidade de números negativos
e a soma dos números positivos desse vetor.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num[10], soma=0;
    int negativos=0, i;

    for(i=0; i<10; i++){
        printf("Entre com o numero: ");
        scanf("%f", &num[i]);

        if(num[i] < 0)
            negativos++;
        if(num[i] > 0)
            soma+=num[i];
    }

    printf("\nNumeros negativos: %d\nSoma dos numeros positivos: %0.2f\n\n", negativos, soma);

    system("pause");
    return 0;
}
