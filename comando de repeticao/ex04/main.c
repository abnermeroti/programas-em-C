/*Leia o nome de um usuário e um número N e escreva o nome dele na tela N vezes*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[20];
    int i, n;
    printf("qual seu nome: ");
    gets(nome);
    printf("digite o numero de vezes que o nome sera impresso: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        printf("%s \n", nome);
    }

    return 0;
}
