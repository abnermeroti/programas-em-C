/*Três amigos, Carlos, André e Felipe. decidiram rachar igualmente a conta de um bar. Faça um algoritmo para
ler o valor total da conta e imprimir quanto cada um deve pagar, mas faça com que Carlos e André não paguem centavos.
Ex: uma conta de R$101,53 resulta em R$33,00 para Carlos, R$33,00 para André e R$35,53
para Felipe*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float total, cada, felipe;
    int carlos, andre;
    printf("qual sera o valor todal da conta? ");
    scanf("%f", &total);
    cada = total/3;
    carlos = cada;
    andre = cada;
    felipe = total - (carlos+andre);
    printf("R$%d,00\n", carlos);
    printf("R$%d,00\n", andre);
    printf("R$%.2f", felipe);


    return 0;
}
