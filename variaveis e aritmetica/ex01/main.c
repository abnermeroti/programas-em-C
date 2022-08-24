#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado1, lado2;
    float area=0;
    printf("qual o tamanho de um dos lados do terreno?(em metros): ");
    scanf("%f", &lado1);
    printf("qual o tamanho do outro lado do terreno?(em metros): ");
    scanf("%f", &lado2);
    area = (lado1*lado2);
    printf("a area do terreno e de %f metros quadrados",area);
    return 0;
}
