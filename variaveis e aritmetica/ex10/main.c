#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1, x2, y1, y2, dist;

    printf("qual a cordenada do ponto 1 em x? ");
    scanf("%f", &x1);
    printf("qual a cordenada do ponto 1 em y? ");
    scanf("%f", &y1);
    printf("qual a cordenada do ponto 2 em x? ");
    scanf("%f", &x2);
    printf("qual a cordenada do ponto 2 em y? ");
    scanf("%f", &y2);
    dist = sqrt(pow(x2-x1, 2)+ pow(y2-y1, 2));

    printf("a distancia entre esses pontos sera: %.2f", dist);

    return 0;
}
