/* 6) Escreva um programa que leia uma string do teclado e converta todos os seus ca
racteres em minúscula. Dica: some 32 dos caracteres cujo código ASCII está entre
65 e 90. */

#include <stdio.h>
#include <string.h>

int main()
{
    char frase[1000];

    printf("Digite a frase: ");
    fgets(frase, sizeof(frase), stdin);

    for (int i = 0; i < strlen(frase); i++)
    {
        char c = frase[i];
        int asc = (int)c;

        if (asc >= 65 && asc <= 90)
        {
            asc = asc + 32;
            frase[i] = (char)asc;
        }
    }

    printf("Frase: %s", frase);
}