/*Uma confecção produz X blusas de lã e para isto gasta uma certa quantidade de novelos. Faça um algoritmo
para calcular quantos novelos de lã ela gasta por blusa.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, numB, novt;
    printf("quantos novelos sao gastos por blusa? ");
    scanf("%d", &num);
    printf("quantas blusas voce quer fazer? ");
    scanf("%d",&numB);
    novt = num*numB;

    printf("voce precisa de %d novelos", novt);


    return 0;
}
