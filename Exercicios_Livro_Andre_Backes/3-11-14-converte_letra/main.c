/*

Livro Linguagem C Completa e Descomplicada - Cap. 3

3.11 - 14 ) Faça um programa que converta uma letra maiúscula em letra minúscula.
Use a tabela ASCII para isso.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;
    int codigo;

    printf("Digite uma letra maiuscula: ");
    scanf("%c", &letra);

    codigo = letra; // transforma a letra em código ASCII

    letra = codigo + 32; // Adiciona o número de códigos entre a letra "A" e a letra "a" na tabela ASCII

    printf("\n%c\n\n", letra);

    system("pause");
    return 0;
}
