/*. Fa�a um algoritmo que leia 20 n�meros e, ao final, escreva quantos est�o entre 0 e
a. 100, quantos est�o entre 101 e 200 e quantos s�o maiores de 200*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, aux=0, num, aux2=0, aux3=0;
    for(i=1; i<21; i++){
        printf("digite um numero: ");
        scanf("%d", &num);
        if(num<101 && num>-1){
            ++aux;
        }
        else if(num<201 && num>100){
            ++aux2;
        }
        else if(num>200){
            ++aux3;
        }
    }
    printf("\nvoce digitou %d numeros entre 0 e 100", aux);
    printf("\nvoce digitou %d numeros entre 101 e 200", aux2);
    printf("\nvoce digitou %d numeros maiores que 200", aux3);
    return 0;
}
