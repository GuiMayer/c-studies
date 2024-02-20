/* 5) Escreva um programa que leia uma string do teclado e converta todos os seus
caracteres em maiúscula. Dica: subtraia 32 dos caracteres cujo código ASCII está
entre 97 e 122. */

#include <stdio.h>
#include <string.h>

int main()
{
    char frase[1000];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    for (int i = 0; i < strlen(frase); i++)
    {
        char c = frase[i];
        int asc = (int)c;

        if (asc <= 122 && asc >= 97)
        {
            asc = asc - 32;
            frase[i] = (char)asc;
        }
    }

    printf("Frase: %s", frase);
}