/* Fa�a um algoritmo que receba o pre�o de um produto, calcule e mostre o novo pre�o, sabendo-se que este
sofreu um desconto de 10%*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v, vf;
    printf("Hqual o valor do produto? ");
    scanf("%f", &v);
    vf = v - (v*0.1);
    printf("valor com desconto: %.2f", vf);
    return 0;
}
