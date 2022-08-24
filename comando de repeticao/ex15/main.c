/*Desenvolva um algoritmo capaz de apresentar na tela o fatorial de um número inteiro informado
pelo usuário*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, aux=1;
    printf("informe um numero: ");
    scanf("%d", &num);

    for( ;num>0; --num){
        aux = aux*num;
    }


    printf("seu fatorial sera: %d", aux);
    return 0;
}
