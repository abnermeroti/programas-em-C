/*. Escreva um algoritmo que simule o funcionamento de um caixa de supermercado. O
 seu algoritmo deve receber do a informa��o de quantos produtos o cliente comprou e, para
cada produto, dever� ler o seu pre�o. Ao final, dever� informar quanto o cliente deve pagar
pelas compras.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qnt;
    float v, vt, aux=0;
    char resp;
    do{
    printf("quer somar produtos: (S ou N)");
    scanf("%c", &resp);

    printf("quantidade de produtos: ");
    scanf("%d", &qnt);

    printf("valor do produto: ");
    scanf("%d", &v);
    getchar();
    vt = qnt*v;

    aux = aux+vt;
    }while(resp == 'S');

    return 0;
}
