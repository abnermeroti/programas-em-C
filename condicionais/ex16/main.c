/*Um banco concederá um crédito especial aos seus clientes, variável com o saldo médio no último ano. Faça
um algoritmo que leia o saldo médio de um cliente e calcule o valor do crédito de acordo com a tabela abaixo.
Mostre uma mensagem informando o saldo médio e o valor do crédito*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s,c;
    printf("digite o seu saldo medio: ");
    scanf("%f", &s);

    if(s<=200){
        c = 0;
        printf("voce tem %.2f de credito", c);
    }
    else if(s<=400 && s>200){
        c = (s*0.2);
        printf("voce tem %.2f de credito", c);
    }
    else if(s<=600 && s>400){
        c = (s*0.3);
        printf("voce tem %.2f de credito", c);
    }
    else if(s>=600){
        c = (s*0.4);
        printf("voce tem %.2f de credito", c);
    }

    return 0;
}
