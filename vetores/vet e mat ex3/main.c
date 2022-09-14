/*Ler um conjunto de numeros reais, armazenando-o em vetor e calcular o quadrado das ´
componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos temˆ
10 elementos cada. Imprimir todos os conjuntos.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet1[10];
    int vet2[10];

    for(int i=0; i<10; i++){
        printf("digite um numero: ");
        scanf("%d", &vet1[i]);
    }
    for(int i=0; i<10; i++){
        vet2[i] = vet1[i] * vet1[i];
    }
    for(int i=0; i<10; i++){
        printf("o valor quadrado dos numeros digitados: %d \n", vet2[i]);
    }

    return 0;
}
