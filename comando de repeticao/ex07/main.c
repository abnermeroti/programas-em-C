/*Leia a idade de 20 pessoas e exiba quantas pessoas são maiores de idade*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num;
    int aux=0;

    for(i=1; i<21; i++){

        printf("qual a idade da pessoa %d: ", i);
        scanf("%d", &num);
        if(num>17){
            aux = aux+1;
        }
    }
    printf("ha %d pessoas maiores de idade", aux);

    return 0;
}
