/*Fac¸a um programa que possua um vetor denominado A que armazene 6 numeros intei- ´
ros. O programa deve executar os seguintes passos:
(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma variavel inteira (simples) a soma entre os valores das posic¸ ´ oes ˜
A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o vetor na posic¸ao 4, atribuindo a esta posic¸ ˜ ao o valor 100. ˜
(d) Mostre na tela cada valor do vetor A, um em cada linha.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma = 0;
    int A[]={1,0,5,-2,-5,7};
    for(int i=0; i<6;i++){
        if(i!= 2 && i!= 3 && i!= 4){
            soma = soma + A[i];
        }
    }
    printf("soma dos valores em [0,1 e 5] = %d \n", soma);
    for(int i=0; i<6;i++){
        if(i == 4){
            A[i] = 100;
        }
        printf("valores em cada posicao %d \n", A[i]);
    }

    return 0;
}
