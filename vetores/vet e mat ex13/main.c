/*Fazer um programa para ler 5 valores e, em seguida, mostrar a posic¸ao onde se encon- ˜
tram o maior e o menor valor.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[5];
    int maior, menor;
    int aux1=0, aux2=0;

    for(int i=0; i<5; i++){
        printf("digite um valor para vet[%d] ", i);
        scanf("%d", &vet[i]);
        maior = vet[0];
        menor = vet[0];
    }
    for(int i=0; i<5; i++){
       if(vet[i] > maior){
            maior = vet[i];
            aux1=i;
        }
        if(vet[i]< menor){
            menor = vet[i];
            aux2 = i;
        }
    }
    for(int i=0; i<5; i++){
        printf("%d\n", vet[i]);
    }

    printf("maior: %d   posicao: [%d] \nmenor: %d    posicao: [%d] \n", maior, aux1,menor, aux2);
    return 0;
}
