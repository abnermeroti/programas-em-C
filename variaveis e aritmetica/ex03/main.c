#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numP, numB;
    float vP, vB, vpoup;
    printf("quantos paes foram vendidos? ");
    scanf("%d", &numP);
    printf("quantas broas foram vendidas? ");
    scanf("%d", &numB);
    vP = numP*0.12;
    vB = numB*1.5;
    vpoup = (vP+vB)*0.1;
    printf("voce tera %f reais para guardar na conta", vpoup);

    return 0;
}
