#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[6];

    for(int i=0; i<6; i++){
        printf("\ndigite um numero inteiro ");
        scanf("%d", &vet[i]);
    }
    for(int i=0; i<6; i++){
        printf("valores lidos: %d\n", vet[i]);
    }
    return 0;
}
