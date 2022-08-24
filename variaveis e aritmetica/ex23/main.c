/* Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é suficientemente longa.
Assumindo que seja possível medir sua sombra e a do prédio no chão, e que você lembre da sua altura, faça um
algoritmo para ler os dados necessários e calcular a altura do prédio.*/
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
