/*Calcule o volume de uma caixa d'água cilíndrica*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    float h, r, volume;
    printf("qual o tamanho do raio? ");
    scanf("%f",&r);
    printf("qual a altura? ");
    scanf("%f",&h);
    volume = 3.14 * (r*r) * h;
    printf("o volume da caixa d'gua sera: %.2f", volume);
    return 0;
}
