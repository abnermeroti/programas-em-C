/*Dados tr�s valores X, Y e Z, verificar se eles podem ser os comprimentos dos lados de um tri�ngulo e, se
forem verificar se � um tri�ngulo equil�tero, is�sceles ou escalenos. Se eles n�o formarem um tri�ngulo,
escrever a mensagem. Considere as seguintes propriedades:
a. O comprimento de cada lado em um tri�ngulo � menor que a soma dos outros dois lados;
b. Equil�teros: tem os comprimentos dos tr�s lados iguais;
c. Is�sceles: tem os comprimentos de dois lados iguais;
d. Escaleno: tem os comprimentos dos tr�s lados diferentes.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, z;
    printf("qual o valor do lado X: ");
    scanf("%f", &x);
    printf("qual o valor do lado Y: ");
    scanf("%f", &y);
    printf("qual o valor do lado Z: ");
    scanf("%f", &z);

    if((x<y+z)&&(y<x+z)&& (z<x+y)){
        if((x = y) && (y = z)){
            printf("e um triangulo equilatero");
        }
        else if(x=y && y!=z){
            printf("e um triangulo isoeles");
        }
        else if(x!=y && y!=z && x!=z){
            printf("e um triangulo escaleno");
        }
    }else{
        printf("isso nao e um triangulo");
    }
    return 0;
}
