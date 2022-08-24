/*Faça um algoritmo que calcule e mostre a área de um trapézio. Sabe-se que:
A = (base maior + base menor)* altura)/2 ;*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float b1, b2, h, area;
    printf("qual o tamanho da base menor? ");
    scanf("%f", &b1);
    printf("qual o tamanho da base maior? ");
    scanf("%f", &b2);
    printf("qual a altura do trapezio? ");
    scanf("%f", &h);
    area = ((b1+b2)* h)/2;
    printf(" area do trapezio: %.2f", area);
    return 0;
}
