/*Ler um número inteiro (assuma até três dígitos) e imprimir a saída da seguinte forma:
CENTENA = x
DEZENA = x
UNIDADE = x */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, dez, cen, uni;
    printf("digite um numero de ate 3 digitos: ");
    scanf("%d", &num);
    cen = num/100;
    dez = (num%100)/10;
    uni = (num%100)%10;
    printf("%d \n%d \n%d", cen, dez, uni);
    return 0;
}
