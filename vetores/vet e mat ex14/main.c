/*Fac¸a um programa que leia um vetor de 10 posic¸oes e verifique se existem valores iguais ˜
e os escreva na tela.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int TAM = 10;
    int vet[TAM];

    for(int i=0; i<TAM; i++){
        printf("digite um valor para vet[%d]", i);
        scanf("%d", &vet[i]);
    }
    for(int i=0; i<TAM; i++){
        for(int j=i+1; j<TAM; j++){
            if(vet[i] == vet[j]){
                printf("%d vet[%d] eh igual %d vet[%d] \n", vet[i], i, vet[j], j);
            }

        }
    }

    return 0;
}
