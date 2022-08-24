/*Ler um vetor D de 10 elementos. Retire todos os valores nulos ou negativos do vetor D. Escrever o vetor
após a retirada dos nulos e negativos.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int D[10];
    int A[10];
    int i=0, aux=0;

    for(i=0; i<10; i++){
        printf("digite um numero para D[%d]",i);
        scanf("%d", &D[i]);

        if(D[i]>0){
            A[aux] = D[i];
            aux++;
        }

    }
    for(i=0; i<aux; i++){
        printf("%d ", A[i]);
    }
    return 0;
}
