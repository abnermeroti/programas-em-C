#include <stdio.h>
#include <stdlib.h>

int main()
{
    int TAM = 10;
    int vet1[TAM];
    int vet2[TAM];
    int vet3[TAM];
    int i=0;

    for(i=0; i<TAM; i++){
        printf("digite um valor para vet1[%d]: ", i);
        scanf("%d", &vet1[i]);
    }
    printf("\n");
    for(i=0; i<TAM; i++){
        printf("digite um valor para vet2[%d]: ", i);
        scanf("%d", &vet2[i]);
    }
    for(i=0; i<TAM; i++){
        vet3[i]= vet1[i] + vet2[i];
    }
    printf("\n");
    for(i=0; i<TAM; i++){
    printf("%d", vet1[i]);
    }
    printf("\n");
    for(i=0; i<TAM; i++){
    printf("%d", vet2[i]);
    }
    printf("\n");
    for(i=0; i<TAM; i++){
    printf("%d", vet3[i]);
    }

    return 0;
}
