/*Um tonel de refresco � feito com 8 partes de �gua mineral e 2 partes de suco de maracuj�.
Fa�a um algoritmo para calcular quantos litros de �gua e de suco s�o necess�rios para se
fazer X litros de refresco (informados pelo usu�rio). */
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
