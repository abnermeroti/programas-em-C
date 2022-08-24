#include <stdio.h>
#include <stdlib.h>

int main()
{

    int km=0, perc=0;

    while(km<=4000){
        printf ("\nquantos quilometros rodou ate agora:");
        scanf ("%d", &perc);
        km = (km+perc);
        printf ("\nquilometros rodados: %d, faltam %d para o final\n", km, 4000-km);
        if (km >= 4000)
            printf ("\nfim da jornada\n");
    }


    return 0;
}