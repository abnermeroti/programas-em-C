/*Em um restaurante Self-Service, o preço do quilo custa R$ 23,59. Crie um algoritmo
 que, para cada cliente, leia o peso do prato e valor gasto com bebida e calcule o valor total
da conta que o cliente irá pagar [ valor da conta = bebida + (peso * 15) ]. Só encerre a
execução quando o peso do prato digitado for igual a 0 e o valor da bebida for também igual
a 0*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    float peso, vb, aux=0;

    do{
        printf("qual o valor da bebida: ");
        scanf("%f", &vb);

        printf("peso do prato: ");
        scanf("%f", &peso);

        if(vb != 0 && peso != 0 ){

            aux = aux + vb + peso*23.59;

        }
    }while(vb != 0 && peso != 0 );

    printf("valor da resfeicao: %.2f", aux);

    return 0;
}
