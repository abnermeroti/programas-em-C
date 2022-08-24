/*ore um algoritmo que leia um vetor e em seguida apresente o vetor ordenado –
 use o método de ordenação que preferir.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int TAM = 10;
    int vet[TAM];
    int aux=0;

    for(int i=0; i<TAM; i++){
        printf("digite o valor para o vetor[%d]", i);
        scanf("%d", &vet[i]);
    }
    for(int i=0; i<TAM; i++){
        for(int j=i+1; j<TAM; j++){
            if(vet[j] < vet[i]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j]= aux;
            }
            aux = 0;
        }
    }
    for(int i=0; i<TAM; i++){
        printf("[%d]", vet[i]);
    }

    return 0;
}
