/*Num determinado Estado, para transferências de veículos, o DETRAN cobra uma taxa de 1% para carros
fabricados antes de 1990 e uma taxa de 1.5% para os fabricados de 1990 em diante, a taxa incide sobre o
valor de tabela do carro. Elabore um algoritmo que leia o ano e o valor de tabela do carro, calcule e informe o
imposto a ser pago*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ano, val, imposto;
    printf("qual o ano do carro? ");
    scanf("%f", &ano);
    printf("qual o valor da tabela? ");
    scanf("%f", &val);

    if(ano<1990){
        imposto = val*0.01;
        printf(" valor do imposto: %.2f", imposto);
    }
    else{
        imposto = val*0.015;
        printf("valor do imposto: %.2f", imposto);
    }
    return 0;
}
