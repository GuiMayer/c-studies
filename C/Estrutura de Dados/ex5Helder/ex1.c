#include <stdio.h>

int comprimento (int t, char *frase){
    int valor = 0;
    char carac;
    for(int i = 0; i <= t; i++){
        carac = frase[i];
        if (carac == '\0'){
            break;
        }
        else{
            valor++;
        }
    }
    return valor;
}

void main(){
    char teste[40] = "plinio armando";
    int c = comprimento(40, teste);
    printf("comprimento: %d", c);
}