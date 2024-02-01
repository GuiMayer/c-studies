#include <stdio.h>

void minMax (int t, int vetor[]){
    int *pos = vetor;
    int maior, menor;
    maior = *pos;
    menor = *pos;
    for(int i = 0; i < t; i++){
        if(*(pos + i) > maior){
            maior = *(pos + i);
        }
        if(*(pos + i) < menor){
            menor = *(pos + i);
        }
    }
    printf("Maior: %d, Menor: %d\n", maior, menor);
}

int main(){
    int vetor[2] = {5,1};

    minMax(2, vetor);

    return 0;
}