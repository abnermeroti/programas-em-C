/*Ler 2 vetores, R de 5 elementos e S de 10 elementos. Gere um vetor X que possua os elementos comuns a
R e a S. Considere que no mesmo vetor não haverá números repetidos. Escrever o vetor X.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int TAM=5;
    int R[TAM];
    int S[10];
    int X[TAM];
    int i=0, j=0;
    int aux=0;

    for(i=0; i<TAM; i++){
        printf("digite um numero para R[%d]: ", i);
        scanf("%d", &R[i]);
    }

    for(i=0; i<10; i++){
        printf("digite um numero para S[%d]: ", i);
        scanf("%d", &S[i]);
    }
    for(i=0; i<TAM; i++){
            for(j=0; j<10; j++){
                if(R[i]== S[j]){
                    X[aux]= R[i];
                    aux++;
                }
            }

    }
    for(i=0; i<TAM; i++){
    printf("%d ", X[i]);
    }
    return 0;
}
