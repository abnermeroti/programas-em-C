#include <stdlib.h>

int main()
{

    int num=0, n, maiores=0;
    n=20;


    for (int i=1; i<=n; i++){
    printf ("\ninsira o numero %d: ", i);
    scanf ("%d", &num);
    if (num>8){
        maiores++;
    }
    }
    printf ("\nnumeros maiores que 8: %d\n", maiores);
    return 0;
}