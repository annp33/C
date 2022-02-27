/*

Universidade Federal de Uberl�ndia - UFU
Faculdade de Computa��o - FACOM
Lista de exerc�cios de programa��o em linguagem C
Exerc�cios: vari�veis e express�oes

49. Fa�a um programa para leia o hor�rio (hora, minuto e segundo) de in�cio e a dura�ao,
em segundos, de uma experi�ncia biol�gica. O programa deve resultar com o novo hor�rio
(hora, minuto e segundo) do t�rmino da mesma.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hora, minuto, segundo, duracao, hora_fim, minuto_fim, segundo_fim;

    printf("Entre com o horario de inicio da experiencia (hora, minuto, segundo):\n");
    scanf("%d %d %d", &hora, &minuto, &segundo);

    printf("Entre com a duracao da experiencia, em segundos: ");
    scanf("%d", &duracao);

    segundo_fim = (segundo+duracao)%60;

    minuto_fim = (minuto+((segundo+duracao)/60))%60;

    hora_fim = hora+((minuto+((segundo+duracao)/60))/60);

    if(hora_fim >= 24)
        hora_fim = hora_fim - 24;

    printf("\nTermino: %d horas %d minutos %d segundos\n\n", hora_fim, minuto_fim, segundo_fim);

    system("pause");
    return 0;
}
