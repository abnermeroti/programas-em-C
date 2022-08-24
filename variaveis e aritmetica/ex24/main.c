/*Um tonel de refresco é feito com 8 partes de água mineral e 2 partes de suco de maracujá.
Faça um algoritmo para calcular quantos litros de água e de suco são necessários para se
fazer X litros de refresco (informados pelo usuário). */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float aux, L, ag, suco;
    printf("quantos listros de refresco voce quer fazer? ");
    scanf("%f", &L);
    aux = L/10;
    ag = aux*8;
    suco = aux*2;
    printf("voce precisa de %.2f litros de agua \nvoce precisa de %.2f litros de suco", ag, suco);
    return 0;
}
