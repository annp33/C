/*

Universidade Federal de Uberl�ndia - UFU
Faculdade de Computa��o - FACOM
Lista de exerc�cios de programa��o em linguagem C
Exerc�cios: vari�veis e express�oes

48. Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tempo, hora, minuto, segundo;

    printf("Entre com o tempo em segundos: ");
    scanf("%d", &tempo);

    //hora = tempo/3600;
    segundo = tempo%60;

    //minuto = (tempo%3600)/60;
    minuto = (tempo/60)%60;

    //segundo = (tempo%3600)%60;
    hora = (tempo/60)/60;

    printf("\n%d segundos = %d horas, %d minutos e %d segundos\n\n", tempo, hora, minuto, segundo);

    system("pause");
    return 0;
}
