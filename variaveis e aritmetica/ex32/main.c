/* Faça um algoritmo que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kg, G;
    printf("qual o seu peso em kg? ");
    scanf("%f", &kg);
    G = kg*1000;
    printf("voce tem %.2f gramas de peso", G);
    return 0;
}
