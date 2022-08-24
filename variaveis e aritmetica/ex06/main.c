#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso, vt, kg=12;

    printf("ola, qual o peso da sua comida em Kg? ");
    scanf("%f", &peso);
    vt = peso*kg;
    printf("o valor da sua comida sera R$ %.2f ",vt);
    return 0;
}
