/*ma empresa conceder� um aumento de sal�rio aos seus funcion�rios, vari�vel de acordo com o cargo,
conforme a tabela abaixo. Fa�a um algoritmo que leia o sal�rio e o cargo de um funcion�rio e
calcule o novo sal�rio. Se o cargo do funcion�rio n�o estiver na tabela, ele dever�, ent�o,
receber 40% de aumento. Mostre o
sal�rio antigo, o novo sal�rio e a diferen�a*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod;
    float sl, slf;
    printf("(101): Gerente\n");
    printf("(102): Engenheiro\n");
    printf("(103): tecnico\n");
    printf("(104): nenhuma das opcoes acima");

    printf("\ndigite o codigo do seu cargo");
    scanf("%d", &cod);
    printf("qual o valor do seu salario? ");
    scanf("%f", &sl);

    if(cod=101){
        slf = sl + (sl*0.1);
        printf("salario antigo: %.2f", sl);
        printf("\nsalario novo: %.2f", slf);

    }else if(cod=102){
        slf = sl + (sl*0.2);
        printf("salario antigo: %.2f", sl);
        printf("\nsalario novo: %.2f", slf);

    }else if(cod = 103){
        slf = sl + (sl*0.3);
        printf("salario antigo: %.2f", sl);
        printf("\nsalario novo: %.2f", slf);

    }else if(cod = 104){
        slf = sl + (sl*0.4);
        printf("salario antigo: %.2f", sl);
        printf("\nsalario novo: %.2f", slf);

    }

    return 0;
}
