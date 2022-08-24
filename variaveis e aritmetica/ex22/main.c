/*Pedrinho tem um cofrinho com muitas moedas, e deseja saber quantos reais conseguiu poupar. Faça um
algoritmo para ler a quantidade de cada tipo de moeda, e imprimir o valor total economizado, em reais.
Considere que existam moedas de 1, 5, 10, 25 e 50 centavos, e ainda moedas de 1 real. Não havendo moeda de
um tipo, a quantidade respectiva é zero.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, d, e, f;
    float va, vb, vc, vd, ve, vf;
    float vtotal;
    printf("quantas moedas de 1 centavo voce tem? ");
    scanf("%f", &a);
    printf("quantas moedas de 5 centavos voce tem? ");
    scanf("%f", &b);
    printf("quantas moedas de 10 centavos voce tem? ");
    scanf("%f", &c);
    printf("quantas moedas de 25 centavos voce tem? ");
    scanf("%f", &d);
    printf("quantas moedas de 50 centavo voce tem? ");
    scanf("%f", &e);
    printf("quantas moedas de 1 real voce tem? ");
    scanf("%f", &f);
    va = a*0.01;
    vb = b*0.05;
    vc = c*0.1;
    vd = d*0.25;
    ve = e*0.50;
    vf = f;
    vtotal = (va+vb+vc+vd+ve+vf);
    printf("voce economizou %.2f reais", vtotal);

    return 0;
}
