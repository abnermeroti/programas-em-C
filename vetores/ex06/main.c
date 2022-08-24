/*Ler um vetor A com 10 elementos inteiros correspondentes as idades de um grupo de pessoas. Escreva um
programa que determine e escreva a menor e a maior idades e suas respectivas posições.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int TAM=10;
    int A[TAM],i,maior,menor,idade;

    printf("digite a idade da pessoa 1: ");
    scanf("%d", &idade);
    maior = idade;
    menor = idade;
    for(i=2;i<=TAM;i++){
        printf("digite a idade da pessoa %d: ", i);
        scanf("%d", &A[i]);

        if(A[i]>maior){
            maior = A[i];
        }
        else if(A[i]<menor){
            menor = A[i];
        }
    }
    printf("menor idade %d \nmaior idade %d", menor, maior);
    return 0;
}
