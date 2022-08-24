/*Faça um algoritmo que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando
peso 2 para a primeira nota e peso 3 para a segunda nota*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, media;
    printf("qual a nota 1? ");
    scanf("%f", &n1);
    printf("qual a nota 2? ");
    scanf("%f", &n2);
    media = ((n1*2)+ (n2*3))/5;
    printf("media: %.2f", media);

    return 0;
}
