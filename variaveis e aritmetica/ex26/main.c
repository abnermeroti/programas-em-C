/*Fa�a um algoritmo que receba tr�s n�meros, calcule e mostre a multiplica��o desses n�meros.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, m;
    printf("digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("digite o segundo numero: ");
    scanf("%f", &n2);
    printf("digite o terceiro numero: ");
    scanf("%f", &n3);
    m = n1*n2*n3;
    printf("o valor da multiplicacao: %.2f ", m);

    return 0;
}
