/*Escreva um algoritmo que leia 10 n�meros informados pelo usu�rio e calcule a soma desses
n�meros*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num, aux=0;
    for(i=1; i<11; i++){

    printf("digite um numero: \n");
    scanf("%d", &num);

    aux = aux+num;

    }
    printf("a somatoria dos numeros eh: %d ", aux);
    return 0;
}
