/* Escreva um algoritmo que leia uma sequ�ncia de n�meros do usu�rio e realize a soma desses
n�meros. Encerre a execu��o quando um n�mero negativo for digitado*/
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
