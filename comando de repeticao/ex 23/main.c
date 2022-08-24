/*. Foi feita uma pesquisa de canal de TV em várias casas da cidade de João Câmara. Para cada
casa visitada, foi preenchida uma ficha contendo o número do canal (3, 5, 8, 11 ou 13) e o número
de pessoas que estavam assistindo o canal naquela casa. Faça um algoritmo que:
a. Leia a informação da quantidade de casas participantes da pesquisa.
b. Receba as informações coletadas em cada uma das casas participantes da
c. pesquisa: a informação do canal que estava sendo assistido e a quantidade de
d. pessoas que estava assistindo aquele canal na casa.
e. Contabilize quantas pessoas estava assistindo cada canal (leve em conta a
f. quantidade de pessoas que assistia cada canal em cada casa)
g. Ao finalizar a leitura de todas as fichas, escreva o número do canal e sua
h. respectiva porcentagem de audiência.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numcasas, canal, pessoas;
    float canal3 =0, Pcanal3 = 0;
    float canal5 = 0, Pcanal5 = 0;
    float canal8 = 0, Pcanal8 = 0;
    float canal11 = 0, Pcanal11 = 0;
    float canal13 = 0, Pcanal13 = 0;
    float aux = 0;
    printf("quantas casas fizeram parte da pesquisa? ");
    scanf("%d", &numcasas);

    for(int i=0; i<numcasas; i++){
        printf("qual canal voces estavam ass? ");
        scanf("%d", &canal);

        printf("quantas pessoas estamav ass?");
        scanf("%d", &pessoas);

        if(canal == 3){
            canal3 = canal3 + pessoas;
        }
        if(canal == 5){
            canal5 = canal5 + pessoas;
        }
        if(canal == 8){
            canal8 = canal8 + pessoas;
        }
        if(canal == 11){
            canal11 = canal11 + pessoas;
        }
        if(canal == 13){
            canal13 = canal13 + pessoas;
        }
        aux = aux + pessoas;

    }
    Pcanal5 = (canal5*100)/aux;
    Pcanal8 = (canal8*100)/aux;
    Pcanal11 = (canal11*100)/aux;
    Pcanal13 = (canal13*100)/aux;
    Pcanal3 = (canal3*100)/aux;

    printf("%f porcento das pessoas assitiam ao canal 3\n", Pcanal3);
    printf("%f porcento das pessoas assitiam ao canal 5\n", Pcanal5);
    printf("%f porcento das pessoas assitiam ao canal 8\n", Pcanal8);
    printf("%f porcento das pessoas assitiam ao canal 11\n", Pcanal11);
    printf("%f porcento das pessoas assitiam ao canal 13\n", Pcanal13);
    return 0;
}
