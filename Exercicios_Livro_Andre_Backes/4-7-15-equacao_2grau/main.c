/*

Livro Linguagem C Completa e Descomplicada - Cap. 4

4.7 - 15 ) Faça um programa que leia os coeficientes de uma equação do segundo grau.
Em seguida, calcule e mostre as raízes dessa equação, lembrando que as raízes são
calculadas como:

x = (-b +- raiz(delta))/(2*a)

em que delta = (b^2) - 4* a * c e a(x^2) + bx + c = 0 representa uma equação do segundo grau.
A variável "a" tem que ser diferente de zero. Caso seja igual a zero, imprima a mensagem
"Não é equação de segundo grau". Do contrário, imprima:

- Se delta < 0, não existe raiz real. Imprima a mensagem "Não existe raiz".
- Se  delta = 0, existe uma raiz real. Imprima a raiz e a mensagem "Raiz única".
- Se delta > 0, existem duas raízes reais. Imprima as raízes.

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
