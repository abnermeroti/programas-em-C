/*Escreva um algoritmo que exiba 20 vezes a mensagem informando qual vez est� sendo escrita:
�Esta � a mensagem 1�, �Esta � a mensagem 2� ... �Esta � a mensagem 20�*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=1;i<21; i++){
        printf("esta e a mensagem %d \n", i);
    }

    return 0;
}
