/*Fa�a um algoritmo que leia uma vari�vel e some 5 caso seja par ou some 8 caso seja �mpar,
imprimir o resultado desta opera��*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, aux;

    printf("digite um numero: ");
    scanf("%d", &num);

    if(num%2 == 0){
        aux = num + 5;
        printf("seu numero + 5 = %d", aux);

    }else{
        aux = num + 8;
        printf("seu numero + 8 = %d", aux);
    }
    return 0;
}
