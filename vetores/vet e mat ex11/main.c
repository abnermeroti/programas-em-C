/*Fac¸a um programa que preencha um vetor com 10 numeros reais, calcule e mostre a ´
quantidade de numeros negativos e a soma dos n ´ umeros positivos desse vetor. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vet[10];
    float posi=0, nega=0;

    for(int i=0; i<10; i++){
        printf("digite um numero qualquer: ");
        scanf("%f", &vet[i]);
    }
    for(int i=0; i<10;i++){
        if(vet[i]>0){
            posi = posi + vet[i];
        }
        if(vet[i]<0){
            nega++;
        }
    }

    printf("quantidade de numeros negativos: %f \nsoma dos positivos: %f", nega, posi);
    return 0;
}
