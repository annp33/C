/*

Universidade Federal de Uberlândia - UFU
Faculdade de Computação - FACOM
Lista de exercícios de programação em linguagem C
Exercícios: variáveis e express˜oes

49. Faça um programa para leia o horário (hora, minuto e segundo) de início e a duraç˜ao,
em segundos, de uma experiência biológica. O programa deve resultar com o novo horário
(hora, minuto e segundo) do término da mesma.

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
