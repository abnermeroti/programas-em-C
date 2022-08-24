/*Leia o nome e a idade de 10 pessoas e exiba o nome da pessoa mais nova*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[20];
    char nomef[20];
    int idade, menor=200, i;

    for(i=1; i<11; i++){

        printf("qual seu nome: ");
        gets(nome);
        printf("qual sua idade: ");
        scanf("%d", &idade);
        getchar();
        if(idade<menor){
            menor = idade;
        	printf("digite novamente seu nome: ");
        	gets(nomef);
        }
    }
    printf("a pessoa mais nova eh: %s \n", nomef);

    printf(" e sua idade eh: %d", menor);

    return 0;
}
