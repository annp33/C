/*

Livro Linguagem C Completa e Descomplicada - Cap. 4

4.7 - 14 ) Faça um programa para verificar se determinado número inteiro lido é
divisível por 3 ou 5, mas não simultanemente pelos dois.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Entre com um numero inteiro: ");
    scanf("%d", &num);

    if(num%3 == 0 && num%5 != 0)
        printf("\nO numero e divisivel por 3, mas nao por 5\n\n");
    else if(num%5 == 0 && num%3 != 0)
        printf("\nO numero e divisivel por 5, mas nao por 3\n\n");
    else if(num%3 == 0 && num%5 == 0)
        printf("\nO numero e divisivel por 3 e por 5\n\n");
    else
        printf("\nO numero nao e divisivel nem por 3 nem por 5\n\n");

    system("pause");
    return 0;
}
