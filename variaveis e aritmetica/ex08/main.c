/*Faça um algoritmo para ler três notas de um aluno em uma disciplina e imprimir a sua média ponderada (as
notas tem pesos respectivos de 1, 2 e 3).*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, media;
    printf("qual a primeira nota do aluno: ");
    scanf("%f", &n1);
    printf("qual a segunda nota do aluno: ");
    scanf("%f", &n2);
    printf("qual a terceira nota do aluno: ");
    scanf("%f", &n3);
    n2 = n2*2;
    n3 = n3*3;
    media = (n1+n2+n3)/6;
    printf("a media do aluno sera %.2f ", media);
    return 0;
}
