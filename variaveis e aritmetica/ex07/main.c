/*Entrar com o dia e o m�s de uma data e informar quantos dias se passaram desde o in�cio do ano. Esque�a
a quest�o dos anos bissextos e considere sempre que um m�s possui 30 dias.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mes, dia, diasp;
    printf("em que mes estamos? (responda em numeros, Ex: julho=7): ");
    scanf("%d", &mes);
    printf("em que dia do mes estamos? ");
    scanf("%d", &dia);
    diasp = (mes*30)+dia;
    printf("ja se passaram %d dias desde o inicio do ano.", diasp);
    return 0;
}
