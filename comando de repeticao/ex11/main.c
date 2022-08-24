/*Faça um algoritmo que leia 20 números e, ao final, escreva quantos estão entre 0 e 100*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, aux=0, num;
    for(i=1; i<21; i++){
        printf("digite um numero: ");
        scanf("%d", &num);
        if(num<100 && num>0){
            ++aux;
        }
    }
    printf("\nvoce digitou %d numeros entre 0 e 100", aux);
    return 0;
}
