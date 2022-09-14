/* Fac¸a um programa que leia um vetor de 8 posic¸oes e, em seguida, leia tamb ˜ em dois va- ´
lores X e Y quaisquer correspondentes a duas posic¸oes no vetor. Ao final seu programa ˜
devera escrever a soma dos valores encontrados nas respectivas posic¸ ´ oes ˜ X e Y*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[8];
    int x = 2, y = 5;
    int soma=0;

    for(int i=0;i<8; i++){
        printf("digite um valor para vet[%d]", i);
        scanf("%d", &vet[i]);
    }
    for(int i=0; i<8; i++){
        if(i==x || i==y){
            soma = soma + vet[i];
        }

    }
    printf("%d", soma);
    return 0;
}
