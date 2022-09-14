/*Leia um vetor de 10 posic¸oes. Contar e escrever quantos valores pares ele possui*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10];
    int aux=0;

    for(int i=0; i<10; i++){
        printf("digite um valor para vet[%d] ", i);
        scanf("%d", &vet[i]);
    }

    for(int i=0; i<10; i++){
        if(vet[i]%2 == 0){
            printf("%d eh par\n", vet[i]);
            aux++;
        }
    }
    printf("voce digitou %d numeros pares", aux);
    return 0;
}
