/* Escreva um algoritmo que leia uma sequência de números do usuário e realize a soma desses
números. Encerre a execução quando um número negativo for digitado*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, aux=0;
    printf("a seguir digite os numeros a serem somados \nQuando quiser parar digite um numero negativo");
    printf("\n");

    do{
        printf("digite um numero: ");
        scanf("%d", &n);
        if(n<0){
            break;
        }
        else{
            aux= aux+n;
       }
    }while(n>0);


    printf("\na soma dos numeros sera: %d", aux);
    return 0;
}
