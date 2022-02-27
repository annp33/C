/*

Livro Linguagem C Completa e Descomplicada - Cap. 4

4.7 - 15 ) Fa�a um programa que leia os coeficientes de uma equa��o do segundo grau.
Em seguida, calcule e mostre as ra�zes dessa equa��o, lembrando que as ra�zes s�o
calculadas como:

x = (-b +- raiz(delta))/(2*a)

em que delta = (b^2) - 4* a * c e a(x^2) + bx + c = 0 representa uma equa��o do segundo grau.
A vari�vel "a" tem que ser diferente de zero. Caso seja igual a zero, imprima a mensagem
"N�o � equa��o de segundo grau". Do contr�rio, imprima:

- Se delta < 0, n�o existe raiz real. Imprima a mensagem "N�o existe raiz".
- Se  delta = 0, existe uma raiz real. Imprima a raiz e a mensagem "Raiz �nica".
- Se delta > 0, existem duas ra�zes reais. Imprima as ra�zes.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c;
    double delta, x, x1, x2;

    printf("Entre com os coeficientes a, b e c da equacao de segundo grau:\n");
    scanf("%f %f %f", &a, &b, &c);

    if(a == 0){
        printf("\nNao e equacao de segundo grau\n\n");

    }else{
        delta = pow(b,2) - 4*a*c;

        if(delta == 0){
            x = -b / (2*a);
            printf("\nRaiz unica x = %f\n\n", x);

        }else if(delta > 0){
            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b - sqrt(delta))/(2*a);
            printf("\nRaizes x1 = %f e x2 = %f\n\n", x1, x2);

        }else{
            printf("\nNao existe raiz\n\n");
        }
    }

    system("pause");
    return 0;
}
