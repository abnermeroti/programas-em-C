#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    printf("ex 21\n");

    int tipo, qf=0, qn=0, i=0;
    int total;

    printf ("\npara os tipos de mesa, escolha 1 para mesas comuns e 2 para fumantes\n");


    for (int i =0; (qn+qf)<50; i++){

        printf ("\n\ntipo de mesa: ");
        scanf ("%d", &tipo);

        if (tipo == 1&& qn<25){
            qn++;

                if ((qn)== 25){
                printf ("\n****sem mesas para nao fumantes****\n");
            }
        }


         if (tipo == 2 && qf<25){
            qf++;

                if ((qf)==25){
                printf ("\n****sem mesas para fumantes****\n");
            }
        }


        if ((tipo != 1) && (tipo != 2))
        printf ("\ndigito invalido\n");

        printf ("\nmesas comuns restantes: %d", 25-qn);
        printf ("\nmesas para fumantes restantes: %d", 25-qf);

    }

    return 0;
}
