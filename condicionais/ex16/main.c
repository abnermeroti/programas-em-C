/*Um banco conceder� um cr�dito especial aos seus clientes, vari�vel com o saldo m�dio no �ltimo ano. Fa�a
um algoritmo que leia o saldo m�dio de um cliente e calcule o valor do cr�dito de acordo com a tabela abaixo.
Mostre uma mensagem informando o saldo m�dio e o valor do cr�dito*/
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
