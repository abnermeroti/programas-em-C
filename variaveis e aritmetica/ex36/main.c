/*Faça um algoritmo que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule e
mostre a quantidade de salários mínimos que ganha esse funcionário.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float slm, sf, qsl;
    printf("qual o salario minimo? ");
    scanf("%f", &slm);
    printf("qual o salario do funcionario? ");
    scanf("%f",&sf);
    qsl = sf/slm;
    printf("o funcionario recebe %.2f salarios minimo", qsl);
    return 0;
}
