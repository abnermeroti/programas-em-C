/*Um funcion�rio recebe um sal�rio fixo mais 4% de comiss�o sobre as vendas. Fa�a um algoritmo que receba
o sal�rio fixo de um funcion�rio e o valor de suas vendas, calcule e mostre a comiss�o e o sal�rio final do
funcion�rio.*/
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
