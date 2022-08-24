/*Desenvolver um algoritmo que leia a altura de 15 pessoas. Este programa deverá calcular e mostrar :
a. A menor altura do grupo;
b. A maior altura do grupo;*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float maior, menor, alt, x;
    int i;

    printf("qual sua altura: ");
    scanf("%f", &x);
    maior = x;
    menor = x;

    for(i=2;i<=15;i++){
        printf("qual sua altura: ");
        scanf("%f", &alt);

        if(alt > maior){
            maior = alt;
        }
        else if(alt < menor){
            menor = alt;
        }

    }
    printf(" o menor do grupo: %f", menor);
    printf(" o maior do grupo: %f", maior);
    return 0;
}
