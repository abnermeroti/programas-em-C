/* Fac¸a um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule
e imprima a media geral.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vet[15];
    float media, soma = 0;

    for(int i=0; i<15; i++){
        printf("digite a nota do aluno %d: ", i+1);
        scanf("%f", &vet[i]);

        soma = soma + vet[i];
    }
    media = soma/15;
    printf("media da turma: %f", media);
    return 0;
}
