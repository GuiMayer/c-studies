#include <stdio.h>
#include <string.h>

void inverter_string(int c, char frase[c]){
    char frase_invertida[c];
    int count = 0;

    for(int i = c - 1; i >= 0; i--){
        frase_invertida[count] = frase[i];
        count++;       

    }

    frase_invertida[count] = '\0';

    //for(int i = 0; i < c; i++){
    //    printf("%c", frase_invertida[i]);
    //}

    for(int i = 0; i <= c; i++){
        frase[i] = frase_invertida[i];
    }

    printf("\n%s", frase);
    printf("\n%s", frase_invertida);

}

int main(){
    char amorinha[10] = "amorinhaaa";

    inverter_string(10, amorinha);
}