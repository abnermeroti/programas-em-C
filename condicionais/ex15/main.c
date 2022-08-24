/*ma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo,
conforme a tabela abaixo. Faça um algoritmo que leia o salário e o cargo de um funcionário e
calcule o novo salário. Se o cargo do funcionário não estiver na tabela, ele deverá, então,
receber 40% de aumento. Mostre o
salário antigo, o novo salário e a diferença*/
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
