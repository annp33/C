/*

Livro Linguagem C Completa e Descomplicada - Cap. 4

4.7 - 2 ) Fa�a um programa que leia dois n�meros e mostre qual deles � o maior.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2;

    printf("Entre com dois numeros:\n");
    scanf("%f %f", &num1, &num2);

    if(num1 > num2)
        printf("\nMaior = %f\n\n", num1);
    else if(num1 == num2)
        printf("\nNumeros iguais\n\n");
    else
        printf("\nMaior = %f\n\n", num2);

    system("pause");
    return 0;
}
