/*Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule seu peso
ideal, utilizando as seguintes fórmulas:
● para homens: (72.7 * h) – 58;
● para mulheres: (62.1 * h) – 44.7. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float alt, peso;
    char sx;
    printf("qual seu sexo: (H ou M): ");
    scanf("%c", &sx);
    printf("qual sua altura: ");
    scanf("%f", &alt);

    if(sx = 'H'){
        peso = (72.7 * alt) - 58;
        printf("seu peso ideal: %.2f", peso);

    }else{
        peso = (62.1*alt)- 44.7;
    }
    return 0;
}
