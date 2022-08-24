#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numf, cavalos, tf;
    printf("quantas ferraduras cada cavalo utiliza? ");
    scanf("%d", &numf);
    printf("quantos cavalos foram comprados? ");
    scanf("%d", &cavalos);
    tf = (numf*cavalos);
    printf("voce precisara de %d ferraduras", tf);

    return 0;
}
