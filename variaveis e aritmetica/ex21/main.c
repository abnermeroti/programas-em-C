/*A fábrica de refrigerantes Meia-Cola vende seu produto em três formatos: lata de 350 ml, garrafa de 600 ml e
garrafa de 2 litros. Se um comerciante compra uma determinada quantidade de cada formato, faça um algoritmo
para calcular quantos litros de refrigerante ele comprou.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lata, g_ml, g_l;
    float lt;
    printf("quantas latas de 350ml foram compradas? ");
    scanf("%d", &lata);
    printf("quantas garrafas de 600ml foram compradas? ");
    scanf("%d", &g_ml);
    printf("quantas lgarrafas de 2litros foram compradas? ");
    scanf("%d", &g_l);
    lt = (lata*0.35)+(g_ml*0.6)+g_l;
    printf("foram vendidos %.2f litros", lt);


    return 0;
}
