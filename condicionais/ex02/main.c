/*Fa�a um algoritmo para receber um n�mero qualquer e informar na tela se � par ou �mpar.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    printf("digite um numero: ");
    scanf("%d", &n1);

    if (n1%2 == 0){
        printf("%d e par", n1);
    }else{
        printf("%d e impar", n1);
    }
    return 0;
}
