/*Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um algoritmo que receba
o salário fixo de um funcionário e o valor de suas vendas, calcule e mostre a comissão e o salário final do
funcionário.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sl, vend, slf, comissao;
    printf("qual o seu salario? ");
    scanf("%f", &sl);
    printf("qual valor em vendas? ");
    scanf("%f", &vend);
    slf = sl + (vend*0.04);
    comissao = vend*0.04;
    printf("sua comissao: %.2f\nseu salario final: %.2f", comissao, slf);

    return 0;
}
