#include <stdio.h>
#include <stdbool.h>

void ex1()
{
    int a = 0, b = 0;

    printf("a: %d\n", &a);
    printf("b: %d\n", &b);

    if (&a > &b){
        printf("Maior: %d\n", &a);
    } else {
        printf("Maior: %d", &b);
    }
}

void ex2()
{
    int inteiro = 10, *p1 = &inteiro;
    double real = 1.5, *p2 = &real;
    char character = 'a', *p3 = &character;

    printf("%d\n", inteiro);
    *p1 = 20;
    printf("%d\n", inteiro);

    printf("%lf\n", real);
    *p2 = 2.0;
    printf("%lf\n", real);

    printf("%c\n", character);
    *p3 = 't';
    printf("%c\n", character);
}

void ex3(){
    float sergio[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, *p = sergio;

    for(int i = 0; i < 10; i++){
        printf("%d = %d \n", i, (void *)p);
        p = p + 4;
    }
}
// EX TRABALHO 1
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
    
// EX TRABALHO 2    
bool taDrento(int f, char *frase, int o, char *ocorrencia){
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

void ex4(){
    char teste[30] = "bruna camila silveira";
    int c = comprimento(30, teste);
    //char t = teste[2];
    printf("comprimento\": %d", c);
}

void ex5(){
    char a[10] = "cumprimido", b[20] = "cumprimido sem vergonha";
    if (taDrento(20, b, 10, a)){
        printf("OCORRE");
    }
    else{
        printf("NAO OCORRE");
    }
}

// Declare um vetor de inteiros e um ponteiro que aponte para o
// primeiro elemento do vetor. Use o ponteiro para percorrer o vetor
// e imprimir seus elementos.

void percorrerVetor(){
    int tamanhhoVetor = 10;
    int vetor[10] = {1,2,3,4,5,6,7,8,9,0};
    int *pos = vetor;

    for(int i = 0; i < tamanhhoVetor; i++)
    printf("%d ", *(pos + i));
}

// Escreva uma função que aceite um vetor de inteiros e seu tamanho
// como argumentos e retorne o valor máximo e mínimo no vetor
// usando ponteiros. Teste a função com diferentes vetores.

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

void testeMM(){
    int vetor[10] = {1,2,3,4,5,6,7,8,9,0};

    minMax(10, vetor);
}

int main(){
    testeMM();

    return 0;
}