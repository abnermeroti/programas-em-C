#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    printf("digite um numero: ");
    scanf("%d", &n1);
    printf("digite outro numero: ");
    scanf("%d", &n2);

    if (n1>n2){
        printf("o numero %d e o maior", n1);
    }else{
        printf("o numero %d e o maior", n2);
    }
    return 0;
}
