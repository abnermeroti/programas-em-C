/*A empresa Hipotheticus paga R$10,00 por hora normal trabalhada, e R$15,00 por hora extra. Faça um algoritmo
para calcular e imprimir o salário bruto e o salário líquido de um determinado funcionário. Considere
que o salário líquido é igual ao salário bruto descontando-se 10% de impostos.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hn, hex, slB;
    float slL;
    printf("quantas horas normal voce trabalhou no mes? ");
    scanf("%d", &hn);
    printf("quantas horas extras voce trabalhou no mes? ");
    scanf("%d", &hex);
    slB = (hn*10)+(hex*15);
    slL = slB-(slB*0.1);
    printf("seu salario bruto sera %d reias\n", slB);
    printf("seu salario livre sera %.2f reais", slL);
    return 0;
}
