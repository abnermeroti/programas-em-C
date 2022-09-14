/*Escreva um programa que leia 10 numeros inteiros e os armazene em um vetor. Imprima ´
o vetor, o maior elemento e a posic¸ao que ele se encontra*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10];
    int maior, aux = 0;

    for(int i=0; i<10; i++){
        printf("digite um valor para vet[%d] ", i);
        scanf("%d", &vet[i]);
        maior = vet[0];
    }
    for(int i=0; i<10; i++){
       if(vet[i]> maior){
        maior = vet[i];
        aux = i;
        }

    }
    printf("maior: %d \nposicao: %d", maior, aux);
    return 0;
}
