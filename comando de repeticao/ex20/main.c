/*. Uma loja de animais vende gatos e cachorros. Escreva um algoritmo que leia a quantidade de
animais da loja e, para cada animal, leia a informa��o da esp�cie do animal (se � gato ou
cachorro). Ao final, exiba a quantidade de animais que s�o gatos e a quantidade de animais que
s�o cachorros existentes na loja*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1, qnt, c=0, g=0, resp;

    printf("qual a quantidade de animais: ");
    scanf("%d", &qnt);
    getchar();

    for (i=1; i<=qnt; i++){
        printf(" o animal %d e cachorro ou gato?(c ou g, respectivamente): ", i);
        scanf("%c", &resp);
        getchar();

        if(resp == 'c'){
            c++;
        }
        else if(resp == 'g'){
            g++;
        }
        else{
            printf("voce digitou errado tente novamente");
        }

    }
    printf(" %d caes", c);
    printf(" %d gatos", g);
    return 0;
}
