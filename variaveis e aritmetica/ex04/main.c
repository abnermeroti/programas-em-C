#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[10];
    int idade, dias;

    printf("quantos anos voce tem? ");
    scanf("%d", &idade);
    getchar();
    printf("qual seu nome? ");
    scanf("%s", &nome);
    dias = idade * 365;
    printf("%s, voce ja viveu %d dias",nome, dias);
    return 0;
}
