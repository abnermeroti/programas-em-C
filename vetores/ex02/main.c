/*Crie um programa que leia um vetor de 20 posições e informe:
a) Quantos números pares existem no vetor
b) Quantos números ímpares existem no vetor
c) Quantos números maiores do que 50
d) Quantos números menores do que 7*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int TAM = 20;
    int vet[TAM];
    int par=0, impar=0, maior=0, menor=0,i;


    for(i=0; i<TAM; i++){
        printf("digite um valor para v[%d]", i);
        scanf("%d", &vet[i]);

        if(vet[i]%2 == 0){
            par++;
        }
        else if(vet[i]%2 != 0){
            impar++;
        }
        if(vet[i] > 50){
            maior++;

        }
        if(vet[i] < 7){
            menor++;
        }
    }
    printf("impar: %d \npar: %d \nmaior que 50: %d \nmenor que 7: %d", impar, par, maior, menor);
    return 0;
}
