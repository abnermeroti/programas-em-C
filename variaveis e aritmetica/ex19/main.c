/*A granja Frangotech possui um controle automatizado de cada frango da sua produ��o. No p� direito do
frango h� um anel com um chip de identifica��o; no p� esquerdo s�o dois an�is para indicar o tipo de alimento
que ele deve consumir. Sabendo que o anel com chip custa R$4,00 e o anel de alimento custa
R$3,50, fa�a um algoritmo para calcular o gasto total da granja para marcar todos os seus frangos.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quant;
    float v_gasto;
    printf("qunatos frangos tem na granja? ");
    scanf("%d", &quant);
    v_gasto = ((2*3.5)+4)*quant;
    printf("%.2f", v_gasto);
    return 0;
}
