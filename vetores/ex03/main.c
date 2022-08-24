/*Criar um vetor A com 8 elementos inteiros. Construir um vetor B de mesmo tipo e tamanho
e com os elementos do vetor A multiplicados por 2, ou seja: B[i] = A[i] * 2. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int TAM=8;
    int vetA[TAM];
    int vetB[TAM];
    int i;

    for(i=0; i<TAM; i++){
        printf("digite um valor para v[%d]", i);
        scanf("%d", &vetA[i]);
    }
    for(i=0; i<TAM; i++){
        vetB[i]= 2*vetA[i];
    }
    for(i=0; i<TAM; i++){
        printf("[%d]", vetA[i]);
    }
    printf("\n");
    for(i=0; i<TAM; i++){
        printf("[%d]", vetB[i]);
    }


    return 0;
}
