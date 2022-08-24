/*Dados três valores X, Y e Z, verificar se eles podem ser os comprimentos dos lados de um triângulo e, se
forem verificar se é um triângulo equilátero, isósceles ou escalenos. Se eles não formarem um triângulo,
escrever a mensagem. Considere as seguintes propriedades:
a. O comprimento de cada lado em um triângulo é menor que a soma dos outros dois lados;
b. Equiláteros: tem os comprimentos dos três lados iguais;
c. Isósceles: tem os comprimentos de dois lados iguais;
d. Escaleno: tem os comprimentos dos três lados diferentes.*/
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
