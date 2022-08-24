/*Uma escola faz o pagamento de seus professores por hora/aula. Faça um algoritmo que solicite ao usuário, o
nível do professor e a quantidade de horas/aula ele tem na semana. Em seguida, calcule e exiba o salário de
um professor sabendo que a fórmula para o cálculo do salário é 𝑠al = 𝑣alorHoraAula ∗ 𝑞tdAula ∗ 4.5. O valor
da hora/aula do professor é dado em função do seu nível:
Professor Nível 1 R$12,00 por hora/aula
Professor Nível 2 R$17,00 por hora/aula
Professor Nível 3 R$25,00 por hora/aula */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nivel, hA;
    float sal;
    printf("qual o seu nivel? (1, 2 ou 3)? ");
    scanf("%f", &nivel);
    printf("informe a quantidade de horas/aulas na semana: ");
    scanf("%f", &hA);\

    if(nivel = 1){
        sal = 12*hA*4.5;
        printf("voce recebera %.2f reais semanalmente", sal);
    }
    else if(nivel = 2){
        sal = 17*hA*4.5;
        printf("voce recebera %.2f reais semanalmente", sal);
    }
    else if(nivel = 3){
        sal = 25*hA*4.5;
        printf("voce recebera %.2f reais semanalmente", sal);
    }
    return 0;
}
