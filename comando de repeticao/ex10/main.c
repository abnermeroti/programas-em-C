/*Escreva um algoritmo que leia 20 n�meros informados pelo usu�rio e exiba quantos n�meros s�o
pares*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, aux=0, num;
    for(i=1; i<21; i++){
        printf("digite um numero: ");
        scanf("%d", &num);
        if(num%2==0){
            ++aux;
        }
    }
    printf("\nvoce digitou %d numeros pares", aux);
    return 0;
}
