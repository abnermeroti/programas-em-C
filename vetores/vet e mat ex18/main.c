/*. Fac¸a um programa que leia um vetor de 10 numeros. Leia um n ´ umero ´ x. Conte os
multiplos de um n ´ umero inteiro ´ x num vetor e mostre-os na tela*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int TAM = 5;
    int vet[TAM];
    int x;

    printf("digite um valor para x: ");
    scanf("%d", &x);

    for(int i=0; i<TAM; i++){
        printf("digite um valor para vet[%d]", i);
        scanf("%d", &vet[i]);
    }
    for(int i=0; i<TAM; i++){
        if(vet[i]%x == 0 ){
            printf("%d eh multiplo de %d \n", vet[i], x);
        }
    }

    return 0;
}
