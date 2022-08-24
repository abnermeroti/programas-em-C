/*Faça um algoritmo que calcule e mostre a área de um quadrado. Sabe-se que: A = lado * lado;*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float L, A;
    printf("qual o tamanho do lado do seu quadrado? ");
    scanf("%f", &L);
    A = L*L;
    printf(" a area do seu quadrado sera: %.2f", A);
    return 0;
}
