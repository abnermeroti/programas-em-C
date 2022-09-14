/*Leia um vetor de 10 posic¸oes e atribua valor 0 para todos os elementos que possu ˜ ´ırem
valores negativos.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int TAM = 5;
    int vet[TAM];

    for(int i=0; i<TAM; i++){
        printf("digite um valor para vet[%d]", i);
        scanf("%d", &vet[i]);
    }
    for(int i=0; i<TAM; i++){
        if(vet[i] > 0){
            printf("%d", vet[i]);
        }
    }

    return 0;
}
