/*Leia um vetor com 20 numeros inteiros. Escreva os elementos do vetor eliminando ele- ´
mentos repetidos.
*/
int main()
{
    int TAM = 20;
    int vet[TAM];

    for(int i=0; i<TAM; i++){
        printf("digite um valor para vet[%d]", i);
        scanf("%d", &vet[i]);
    }
    for(int i=0; i<TAM; i++){
        for(int j=i+1; j<TAM; j++){
            if(vet[i] == vet[j]){
                vet[j] = 0;
            }
        }
    }
    for(int i=0; i<TAM; i++){
        if(vet[i]!=0){
            printf("%d", vet[i]);
        }
    }

    return 0;
}
