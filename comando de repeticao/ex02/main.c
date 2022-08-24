/*Escreva um algoritmo que calcule o somatório dos números de um intervalo informado pelo
usuário*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, aux=0;
    printf("digite um numero: ");
    scanf("%d", &n1);
    printf("digite outro numero(diferente do anterior): ");
    scanf("%d", &n2);

    if(n2<n1){
        aux = n2;
        n2=n1;
        n1=aux;
        aux=0;
    }
    n1++;
    for( ;n1<n2; n1++){
        aux = aux+n1;

    }
    printf("%d", aux);
    return 0;
}
