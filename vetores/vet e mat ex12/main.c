/*Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos
juntamente com o maior, o menor e a media dos valores.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[5];
    int maior, menor;
    float media, aux = 0;

    for(int i=0; i<5; i++){
        printf("digite um valor para vet[%d] ", i);
        scanf("%d", &vet[i]);
        maior = vet[0];
        maior = vet[0];
        aux = aux + vet[i];
    }
    for(int i=0; i<5; i++){
       if(vet[i]> maior){
        maior = vet[i];
        }
        if(vet[i]< menor){
        menor = vet[i];
        }
    }
    for(int i=0; i<5; i++){
        printf("%d\n", vet[i]);
    }


    media = aux/5;

    printf("maior: %d \nmenor: %d \nmedia: %f", maior, menor, media);
    return 0;
}
