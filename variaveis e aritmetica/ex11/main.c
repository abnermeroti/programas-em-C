/*Uma fábrica controla o tempo de trabalho sem acidentes pela quantidade de dias. Faça um algoritmo para
converter este tempo em anos, meses e dias. Assuma que cada mês possui sempre 30 dias.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int diast, dias, meses, anos;
    printf("quantos dias a empresa trabalhou sem acidentes? ");
    scanf("%d", &diast);
    anos = diast/360;
    meses = (diast%360)/30;
    dias = (diast%360)%30;
    printf("%d\n %d\n %d\n", anos, meses, dias);
    return 0;
}
