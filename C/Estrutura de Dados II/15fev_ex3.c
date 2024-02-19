#include <stdio.h>
#include <string.h>

/* 3) Leia uma string do teclado e conte quantas vogais (a, e, i,
o, u) ela possui. Entre com um caractere (vogal ou consoante)
e substitua todas as vogais da palavra dada por esse
caractere. Ao final, imprima a nova string e o número de
vogais que ela possui. */

int main()
{
    char frase[100];
    int contador = 0;
    char letra;

    gets(frase);

    int quant_letras = strlen(frase);

    for (int i = 0; i < quant_letras; i++)
    {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u')
        {
            contador++;
        }
    }
    printf("Quantidade de vogais: %d\n", contador);

    scanf("%c", &letra);

    if (contador > 0)
    {
        for (int i = 0; i < quant_letras; i++)
        {
            if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u')
            {
                frase[i] = letra;
            }
        }

        printf("Frase com vogais substituidas: %s\n", frase);
    } else
    {
        printf("Nenhuma vogal encontrada na frase.");
    }

    return 0;
}