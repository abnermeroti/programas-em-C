/*Calcule a área de uma pizza que possui um raio R (pi=3.14).*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float area, pi=3.14;
    int raio;
    printf("qual o raio da sua pizza? ");
    scanf("%d", &raio);
    area = pi*pow(raio,2);
    printf("a area da sua pizza sera: %.2f", area);
    return 0;
}
