/*Fa�a um algoritmo escreva a diversas vezes a pergunta �Ol� tudo bem?� e leia a
a. resposta do usu�rio enquanto ele responde n�o. S� encerre a execu��o quando a resposta
for igual a �Sim�.*/
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
