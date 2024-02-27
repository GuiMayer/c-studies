#include <stdio.h>
#include <string.h>

int main(){
    char frase[10];

    gets(frase);

    for(int i = 10; i >= 0; i--){
        printf("%c", frase[i]);
    }

    printf("\nFrase inteira: %s", frase);
}