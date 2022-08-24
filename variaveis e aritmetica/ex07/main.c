/*Entrar com o dia e o mês de uma data e informar quantos dias se passaram desde o início do ano. Esqueça
a questão dos anos bissextos e considere sempre que um mês possui 30 dias.*/
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
