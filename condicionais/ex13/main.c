/*Escrever um algoritmo que leia um valor em reais e calcule qual o menor número possível de notas de 100,
50, 10, 5 e 1 em que o valor lido pode ser decomposto. Escrever o valor lido e a relação de notas necessárias*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, n4, n5, valor;
    printf("digite um numero: ");
    scanf("%d", &valor);

    n1= valor/100;
    n2= (valor%100)/50;
    n3= ((valor%100)%50)/20;
    n4= (((valor%100)%50)%20)/10;
    n5= (((valor%100)%50)%20)%10;

    printf("\n%d(100) \n%d(50) \n%d(20) \n%d(10) \n%d(1)", n1, n2, n3, n4, n5);
    return 0;
}
