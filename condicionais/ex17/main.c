/*Para uma lanchonete, escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor
a ser pago por aquele lanche. Considere que a cada execução somente será calculado um item. O cardápio
é o seguinte: */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float L, q, v;
    printf("***CARDAPIO***");
    printf("\n1- cachorro-quente: R$11,00");
    printf("\n2- bauru: R$8,50");
    printf("\n3- misto-quente: R$8,00");
    printf("\n4- hamburguer: R$9,00");
    printf("\n5- cheeseburguer: R$10,00");
    printf("\n6- refrigerante: R$4,50");

    printf("\nqual lanche voce quer? ");
    scanf("%f", &L);
    printf("\ndigite a quantidade: ");
    scanf("%f", &q);

    if(L == 1){
        v = q*11;
        printf("valor do pedido: %.2f", v);
    }
    else if(L == 2){
        v = q*8.5;
        printf("valor do pedido: %.2f", v);
    }
    else if(L==3){
        v = q*8;
        printf("valor do pedido: %.2f", v);
    }
    else if(L==4){
        v = q*9;
        printf("valor do pedido: %.2f", v);
    }
    else if(L==5){
        v = q*10;
        printf("valor do pedido: %.2f", v);
    }
    else if(L==6){
        v = q*4.5;
        printf("valor do pedido: %.2f", v);
    }

    return 0;
}
