/* Num dia de sol, voc� deseja medir a altura de um pr�dio, por�m, a trena n�o � suficientemente longa.
Assumindo que seja poss�vel medir sua sombra e a do pr�dio no ch�o, e que voc� lembre da sua altura, fa�a um
algoritmo para ler os dados necess�rios e calcular a altura do pr�dio.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float alt1, tams1, tamSP, altP;
    printf("qual a sua altura? ");
    scanf("%f", &alt1);
    printf("qual o tamanho da sua sombra? ");
    scanf("%f", &tams1);
    printf("qual o tamanho da sombra do predio? ");
    scanf("%f", &tamSP);
    altP = (tamSP*alt1)/tams1;
    printf("o predio tera %.2f metros de altura", altP);
    return 0;
}
