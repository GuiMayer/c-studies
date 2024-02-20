/* 4) Construa um programa que leia duas strings do teclado. Imprima uma mensagem
informando quantas vezes a segunda string lida está contida dentro da primeira. */

/* comparar se a letra atual do loop corresponde a letra correspondente da segunda frase, caso contrario o contador volta ao zero */

#include <stdio.h>
#include <string.h>

int main (){
    char frase1[1000], frase2[1000];
    int vzsContido = 0;

    printf("Digite a primeira frase: ");
    fgets(frase1, sizeof(frase1), stdin);

    printf("\nDigite a segunda frase: ");
    fgets(frase2, sizeof(frase2), stdin);

    int lenFrase1 = strlen(frase1);
    int lenFrase2 = strlen(frase2);

    for(int i = 0, count = 0; i < lenFrase1; i++)
    {
        if (frase1[i] == frase2[count]){
            count ++;
            if (count == lenFrase2){
                vzsContido++;
                count = 0;
            }
        } else
        {
            count = 0;
        }
    }

    printf("Vezes que a segunda frase aparece na primeira: %d", vzsContido);


}