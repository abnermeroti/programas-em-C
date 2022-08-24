/*Leia a idade de 20 pessoas e exiba a média das idades*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num;
    float media, aux;

    for(i=1; i<21; i++){

        printf("qual a idade da pessoa %d: ", i);
        scanf("%d", &num);

        aux = aux + num;
    }
    media = aux/20;
    printf(" a media das idades sera: %.2f", media);

    return 0;
}
