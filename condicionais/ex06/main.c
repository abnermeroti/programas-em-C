/* Escreva um algoritmo que leia três valores inteiros e diferentes e mostre-os em ordem decrescente*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3;
   printf("digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("digite o segundo numero: ");
    scanf("%d", &n2);
    printf("digite o terceiro numero: ");
    scanf("%d", &n3);
    if(n1<n2 && n2<n3){
        printf("%d\n %d\n %d", n1, n2, n3);
    }else if(n1>n2 && n1<n3){
        printf("%d \n%d \n%d", n2, n1, n3);
    }else if(n1<n3 && n2>n3){
        printf("%d \n%d \n%d", n1, n3, n2);
    }else if(n3>n2 && n1>n3){
        printf("%d \n%d \n%d", n2, n3, n1);
    }else if(n2>n3 && n1>n2){
        printf("%d \n%d \n%d", n3, n2, n1);
    }else if(n1>n3 && n2>n1){
        printf("%d \n%d \n%d",n3, n1, n2);
    }
    return 0;
}
