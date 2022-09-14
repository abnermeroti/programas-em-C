/*Fac¸a um programa que leia um vetor de 5 posic¸oes para n ˜ umeros reais e, depois, um ´
codigo inteiro. Se o c ´ odigo for zero, finalize o programa; se for 1, mostre o vetor na ordem ´
direta; se for 2, mostre o vetor na ordem inversa. Caso, o codigo for diferente de 1 e 2 ´
escreva uma mensagem informando que o codigo ´ e inv ´ alido. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int TAM = 5;
    int vet[TAM];
    int cod;

    for(int i=0; i<TAM; i++){
        printf("digite um valor para vet[%d]", i);
        scanf("%d", &vet[i]);
    }
    printf("digite um codigo: (0,1 ou 2)");
    scanf("%d", &cod);

    if(cod == 0){
        printf("fim do programa");
    }
    else if(cod == 1){
        for(int i=0; i<TAM; i++){
            printf("%d", vet[i]);
            }
    }
    else if(cod == 2){
        for(int i=TAM-1; i>=0; i--){
            printf("%d", vet[i]);
        }
    }
    else{
        printf("voce digitou um codigo invalido");
    }

    return 0;
}
