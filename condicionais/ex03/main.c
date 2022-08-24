/*Faça um algoritmo que leia dois valores inteiros A e B se os valores forem iguais deverá se somar os dois,
caso contrário multiplique A por B. Ao final, apresente o resultado*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, aux;

    printf("digite um numero: ");
    scanf("%d", &a);
    printf("digite outro numero: ");
    scanf("%d", &b);

    if(a == b){
        aux = a+b;
        printf("a soma sera: %d", aux);
    }else{
        aux = a*b;
        printf("a multiplicacao sera: %d", aux);
    }
    return 0;
}
