/*Faça um algoritmo escreva a diversas vezes a pergunta “Olá tudo bem?” e leia a
a. resposta do usuário enquanto ele responde não. Só encerre a execução quando a resposta
for igual a “Sim”.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char resp[5];
    do{
        printf("ola tudo bem? ");
        gets(resp);
        printf("%s",resp);
    }while(resp != 'sim');
    return 0;
}
