#include <stdio.h>

void main(){
    int tamanhoVetor = 10;
    int vetor[10] = {1,2,3,4,5,6,7,8,9,0};
    int *pos = vetor;

    for(int i = 0; i < tamanhoVetor; i++)
        printf("%d ", *(pos + i));
}