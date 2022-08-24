/*Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a. a idade dessa pessoa em anos;
b. a idade dessa pessoa em meses;
c. a idade dessa pessoa em dias
d. a idade dessa pessoa em semanas.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nasc, anoatual, anos, meses, semanas, dias;
    printf("qual ano voce nasceu? ");
    scanf("%d", &nasc);
    printf("em que ano estamos? ");
    scanf("%d", &anoatual);
    anos = anoatual - nasc;
    meses = anos *12;
    semanas = meses*4;
    dias = semanas*7;
    printf("voce tem:\n%d anos \n%d meses \n%d semanas \n%d dias ", anos, meses, semanas, dias);

    return 0;
}
