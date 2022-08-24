/*Escreva um algoritmo que leia a quantidade de alunos em uma turma. Em seguida,
a. para cada aluno, leia a informação de suas 2 notas, calcule a média e informe se o
b. aluno está aprovado ou reprovado. O aluno está aprovado apenas se a sua média for maior
ou igual a 6.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qnt,i=1;
    float n1, n2, med;
    printf("quantos alunos tem na turma?");
    scanf("%d", &qnt);

    for (i=1; i<=qnt; i++){
        printf("\nqual a nota1 do aluno %d: ",i);
        scanf("%f", &n1);
        printf("\nqual a nota2 do aluno %d: ",i);
        scanf("%f", &n2);

        med = (n1+n2)/2;
        if(med>59){
            printf("\no aluno esta aprovado");
        }
        else{
            printf("\no aluno esta reprovado");
        }


    }
    return 0;
}
