/*Ler um vetor R de 5 elementos contendo o gabarito da LOTO. A seguir ler um vetor A de 10 elementos
contendo uma aposta. A seguir imprima quantos pontos fez o apostador.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int R[5];
    int A[10];
    int i=0, j=0, aux=0;

    for(i=0; i<5; i++){
        printf("digite o numero para R[%d]",i);
        scanf("%d", &R[i]);
    }
    for(i=0; i<10; i++){
        printf("digite o numero para A[%d]",i);
        scanf("%d", &A[i]);
    }
    for(i=0; i<5; i++){
        for(j=0; j<10; j++){
            if(R[i] == A[j]){
                aux++;
            }
        }
    }
    printf("voce fez %d pontos", aux);
    return 0;
}