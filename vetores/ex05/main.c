/*Criar um vetor A com 10 elementos inteiros. Escrever um programa que calcule e escreva:
a) a soma de elementos armazenados neste vetor que são inferiores a 15;
b) a quantidade de elementos armazenados no vetor que são iguais a 15; e
c) a média dos elementos armazenados no vetor que são superiores a 15. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int TAM = 4;
    int A[TAM];
    int i, menor=0, igual=0, maior=0;
    float media, aux=0;

    for (i=0; i<TAM; i++){
        printf("digite um valor para v[%d]", i);
        scanf("%d", &A[i]);
        if(A[i]<15){
            menor = menor + A[i];
        }
        else if(A[i] == 15){
            igual++;
        }
        else if(A[i]>15){
            maior = maior + A[i];
            aux++;
        }
    }
    if(aux>0){
        media = maior/aux;
    }

    printf("%d \n%d \n%f ", menor, igual, media);
    return 0;
}
