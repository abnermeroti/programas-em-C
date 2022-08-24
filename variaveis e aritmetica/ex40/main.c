/*Faça um algoritmo que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float cat1, cat2, H;
    printf("digite o tamanho de um cateto: ");
    scanf("%f", &cat1);
    printf("digite o tamanho do outro cateto: ");
    scanf("%f", &cat2);
    H = sqrt(pow(cat1,2)+pow(cat2,2));
    printf("hipotenusa: %.2f", H);

    return 0;
}
