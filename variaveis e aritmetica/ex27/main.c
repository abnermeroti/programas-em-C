/* Faça um algoritmo que receba dois números, calcule e mostre a divisão do primeiro número pelo segundo.
Sabe-se que o segundo número não pode ser zero, portanto não é necessário se preocupar com validações*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, div;
    printf("digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("digite o segundo numero(nao pode ser o zero): ");
    scanf("%f", &n2);
    div = n1/n2;
    printf ("%.2f", div);

    return 0;
}
