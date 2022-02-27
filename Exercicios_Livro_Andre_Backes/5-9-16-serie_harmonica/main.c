/*

Livro Linguagem C Completa e Descomplicada - Cap. 5

5.9 - 16 ) Em matemática, o número harmônico designado por Hn defini-se como
o enésimo termo da série harmônica. Ou seja:

Hn = 1 + (1/2) + (1/3) + (1/4) + ... + (1/n)

Apresente um programa que calcule o valor de qualquer Hn.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    float h=0;

    printf("Entre com a posicao n do termo da serie harmonica H: ");
    scanf("%d", &n);

    printf("\nH%d =", n);

    for(i=1; i<=n; i++){
        h = h + (1.0/i);

        if(i==n)
            printf(" 1/%d", i);
        else if (i!=n)
            printf(" 1/%d +", i);
    }

    printf(" = %f\n\n", h);

    system("pause");
    return 0;
}
