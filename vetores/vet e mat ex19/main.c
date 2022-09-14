/*Fac¸a um vetor de tamanho 50 preenchido com o seguinte valor: (i+ 5 ∗ i)%(i+ 1), sendo
i a posic¸ao do elemento no vetor. Em seguida imprima o vetor na tela. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int TAM = 50;
    int vet[TAM];
    int x;


    for(int i=0; i<TAM; i++){
        vet[i] = (i + 5*i)%(i+1);
    }
    for(int i=0; i<TAM; i++){
            printf("%d\n", vet[i]);

    }

    return 0;
}
