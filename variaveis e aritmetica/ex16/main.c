/*A lanchonete Gostosura vende apenas um tipo de sandu�che, cujo recheio inclui duas fatias de queijo, uma
fatia de presunto e uma rodela de hamb�rguer. Sabendo que cada fatia de queijo ou presunto pesa 50 gramas,
e que a rodela de hamb�rguer pesa 100 gramas, fa�a um algoritmo em que o dono forne�a a quantidade de
sandu�ches a fazer, e a m�quina informe as quantidades (em quilos) de queijo, presunto e carne
necess�rios para compra.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;
    float queijo, pres, hamb;

    printf("quantos sanduiches voce quer fazer? ");
    scanf("%f", &num);
    queijo = ((2*num)*50)/1000;
    pres = (num*50)/1000;
    hamb = (num*100)/1000;
    printf("voce precisara comprar %.2f kg de carne", hamb);
    printf("voce precisara comprar %.2f kg de queijo", queijo);
    printf("voce precisara comprar %.2f kg de pres", pres);

    return 0;
}
