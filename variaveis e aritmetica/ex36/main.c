/*Fa�a um algoritmo que receba o valor do sal�rio m�nimo e o valor do sal�rio de um funcion�rio, calcule e
mostre a quantidade de sal�rios m�nimos que ganha esse funcion�rio.*/
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
