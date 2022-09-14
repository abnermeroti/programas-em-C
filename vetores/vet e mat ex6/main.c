/*Fac¸a um programa que receba do usuario um vetor com 10 posic¸ ´ oes. Em seguida dever ˜ a´
ser impresso o maior e o menor elemento do vetor*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10];
    int maior, menor;

    for(int i=0; i<10; i++){
        printf("digite um valor para vet[%d] ", i);
        scanf("%d", &vet[i]);
        maior = vet[0];
        menor = vet[0];
    }
    for(int i=0; i<10; i++){
       if(vet[i]> maior){
        maior = vet[i];
       }
       if(vet[i]< menor){
        menor = vet[i];
       }

    }
    printf("maior: %d \nmenor: %d", maior, menor);
    return 0;
}
