 /*Faça um algoritmo que receba o peso de uma pessoa, calcule e mostre:
a. o novo peso se a pessoa engordar 15% sobre o peso digitado;
b. o novo peso se a pessoa emagrecer 20% sobre o peso digitado. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso, ema, eng;
    printf("qual o seu peso? ");
    scanf("%f", &peso);
    ema = peso - (peso*0.20);
    eng = peso + (peso*0.15);
    printf("a: %.2f\nb: %.2f", eng, ema);
    return 0;
}
