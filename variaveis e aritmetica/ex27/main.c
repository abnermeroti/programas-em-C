/* Fa�a um algoritmo que receba dois n�meros, calcule e mostre a divis�o do primeiro n�mero pelo segundo.
Sabe-se que o segundo n�mero n�o pode ser zero, portanto n�o � necess�rio se preocupar com valida��es*/
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
