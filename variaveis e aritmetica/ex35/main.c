/*Faça um algoritmo que calcule e mostre a área de um losango. Sabe-se que:
A = (diagonal_maior * diagonal_menor)/2;*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dmenor, dmaior, area;
    printf("digite o tamanho da diagonal maior: ");
    scanf("%f", &dmaior);
    printf("digite o tamanho da diagonal menor: ");
    scanf("%f", &dmenor);
    area = dmenor*dmaior/2;
    printf("sua area sera: %.2f", area);
    return 0;
}
