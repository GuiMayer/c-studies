#include <stdio.h>
#include <stdbool.h>

bool contem(int f, char *frase, int o, char *ocorrencia){
    int x = f - o + 1;
    int counter;
    for (int i = 0; i <= x; i++){ // buscar dentro da frase
        // primeira posição da busca
        counter = 0;
        for (int z = 0; z < o; z++){ // verifica se a palavra bate
            if (frase[i + z] == ocorrencia[z]){
                counter++;
            }
            if (counter == o){
                return true;
            }
        }
    }
    return false;
}

void main(){
    char a[10] = "teste", b[20] = "isto e um teste";
    if (contem(20, b, 10, a)){
        printf("OCORRE");
    }
    else{
        printf("NAO OCORRE");
    }
}