/*Uma f�brica de camisetas produz os tamanhos pequeno, m�dio e grande, cada uma sendo vendida respectivamente por 10, 12 e 15 reais.
 Construa um algoritmo em que o usu�rio forne�a a quantidade de camisetas
pequenas, m�dias e grandes referentes a uma venda, e a m�quina informe quanto ser� o valor arrecadado*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p, m, g, vt;
    printf("quantas camisetas tamanho P? ");
    scanf("%d", &p);
    printf("quantas camisetas tamanho M? ");
    scanf("%d", &m);
    printf("quantas camisetas tamanho G? ");
    scanf("%d", &g);
    vt = (p*10)+(m*12)+(g*15);
    printf("o valor da compra sera de R$%d,00", vt);

    return 0;
}
