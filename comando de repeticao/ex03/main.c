/*Leia o nome do usuário e escreva o nome dele na tela 10 vezes*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[20];
    int i;
    printf("qual seu nome? ");
    gets(nome);

    for(i=1; i<11; i++){
        printf("%s \n", nome);
    }
    return 0;
}
