/*Alguns países medem temperaturas em graus Celsius, e outros em graus Fahrenheit. Faça um algoritmo
para ler uma temperatura Celsius e imprimi-Ia em Fahrenheit (pesquise como fazer este tipo de conversão).*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c, f;
    printf("qual a temperatura em graus celsius? ");
    scanf("%f", &c);
    f = (c*9/5)+32;
    printf("sua temperatura em graus fahrenheit sera: %.2f", f);
    return 0;
}
