/*Escreva um algoritmo que leia o número de identificação do aluno,
3 notas obtidas e calcule a média aritmética obtida pelo aluno.
Ao final informe se o aluno foi aprovado direto, ficou em recuperação ou foi reprovado
por nota.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id;
    float n1, n2, n3, m;
    printf("qual o numero de identificacao do aluno: ");
    scanf("%d", &id);
    printf("qual a nota1 do aluno: ");
    scanf("%f", &n1);
    printf("qual a nota2 do aluno: ");
    scanf("%f", &n2);
    printf("qual a nota3 do aluno: ");
    scanf("%f", &n3);

    m = (n1+n2+n3)/3;

    if(m >= 60){
        printf("parabens voce foi aprovado");
    }
    else if((m>=45) && (m<60)) {
        printf("voce ficou de recuperacao");
    }
    else if(m<45){
        printf("voce reprovou");
    }

    return 0;
}
