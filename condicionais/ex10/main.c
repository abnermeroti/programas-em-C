/*Elabore um algoritmo que leia dois números inteiros e mostre o resultado
da diferença do maior valor pelo menor;*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, aux;
    printf("digite um numero: ");
    scanf("%d", &n1);
    printf("digite outro numero: ");
    scanf("%d", &n2);

    if (n1>n2){
        aux = n1-n2;
        printf(" a diferenca entre eles sera: %d", aux);
    }
    else{
        aux = n2-n1;
        printf(" a diferenca entre eles sera: %d", aux);
    }

    return 0;
}
