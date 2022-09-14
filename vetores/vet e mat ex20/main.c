/*Escreva um programa que leia numeros inteiros no intervalo [0,50] e os armazene em um ´
vetor com 10 posic¸oes. Preencha um segundo vetor apenas com os n ˜ umeros ´ ´ımpares
do primeiro vetor. Imprima os dois vetores, 2 elementos por linha*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int TAM = 5;
    int vet1[TAM];
    int vet2[10];
    int j=0;

    for(int i=0; i<TAM; i++){
        printf("digite um numero ente 0 e 50: ");
        scanf("%d", &vet1[i]);
    }
    for(int i=0; i<TAM; i++){
        if(vet1[i]%2 != 0){
            vet2[j] = vet1[i];
            j++;
        }
    }
    printf("vet digitado: ");
    for(int i=0; i<TAM; i++){
        printf(" %d ", vet1[i]);
    }
    printf("\nvet impar: ");
    for(int i=0; i<j; i++){
        printf("%d ", vet2[i]);
    }

    return 0;
}
