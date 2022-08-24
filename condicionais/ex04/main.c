/*Encontrar o dobro de um número caso ele seja positivo e o seu triplo caso seja negativo, imprimindo o resultado*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, aux;
    printf("digite um numero: ");
    scanf("%d", &num);

    if(num>=0){
        aux = num*2;
        printf("o dobro sera: %d ", aux);

    }else{
        aux = num *3;
        printf("o triplo sera: %d", aux);
    }

    return 0;
}
