/*Elabore um algoritmo que calcule o que deve ser pago por um produto,
considerando o pre�o normal de etiqueta e a escolha da condi��o de pagamento.
Utilize os c�digos da tabela a seguir para ler qual a condi��o
de pagamento escolhida e efetuar o c�lculo adequado.
C�digo Condi��o de pagamento
a) � vista em dinheiro ou cheque, recebe 10% de desconto
b) � vista no cart�o de cr�dito, recebe 15% de desconto
c) Em duas vezes, pre�o normal de etiqueta sem juros
d) Em duas vezes, pre�o normal de etiqueta mais juros de 10%*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char aux;
    float v, vf;

    printf("qual o valor da etiqueta? ");
    scanf("%f", &v);
    getchar();
    printf("a) A vista em dinheiro ou cheque\n");
    printf("b) A vista no cart�o de cr�dito\n");
    printf("c) Em duas vezes\n");
    printf("d) Em tres vezes\n");
    printf("escolha uma das opcoes: ");
    scanf("%c", &aux);

    if(aux='a'){
        vf = v - (v*0.1);
        printf("voce pagara: %.2f", vf);

    }else if(aux='b'){
        vf = v - (v*0.15);
        printf("voce pagara: %.2f", vf);

    }else if(aux='c'){
        vf = v;
        printf("voce pagara: %.2f", vf);

    }else if(aux='d'){
        vf = v + (v*0.1);
        printf("voce pagara: %.2f", vf);
    }
    return 0;
}
