/* Considere uma estrutura (struct) chamada Aluno que possui os
seguintes campos:
• nome (uma string com no máximo 50 caracteres).
• matrícula (um número inteiro).
• nota (um número decimal).
Declare um vetor de estruturas Aluno para armazenar informações
de alunos. O tamanho do vetor pode ser definido como você
preferir (por exemplo, 5 alunos).
Escreva um programa que permita ao usuário inserir informações
para cada aluno no vetor de estruturas. Use ponteiros para
percorrer e preencher as informações.
Em seguida, crie uma função chamada encontraMelhorAluno que
recebe o vetor de estruturas de alunos e seu tamanho como
argumentos e retorna um ponteiro para o aluno com a nota mais
alta. Crie outra função chamada encontraPiorAluno que também
recebe o vetor de alunos, mas retorna um ponteiro para o aluno
com a nota mais baixa. */

#include <stdio.h>

typedef struct
{
    char nome[50];
    int matricula;
    float nota;
} Aluno;

// Função que recebe o vetor de estruturas de alunos e seu tamanho como
// argumentos e retorna um ponteiro para o aluno com a nota mais alta
Aluno* encontraMelhorAluno(Aluno* vetor, int tamanho) {
    // Inicializando o ponteiro com o primeiro elemento do vetor
    Aluno* melhor = &vetor[0];
    // Percorrendo o vetor com um ponteiro
    for (Aluno* p = vetor; p < vetor + tamanho; p++) {
        // Comparando as notas dos alunos
        if (p->nota > melhor->nota) {
            // Atualizando o ponteiro com o aluno de maior nota
            melhor = p;
        }
    }
    // Retornando o ponteiro para o melhor aluno
    return melhor;
}

// Função que recebe o vetor de estruturas de alunos e seu tamanho como
// argumentos e retorna um ponteiro para o aluno com a nota mais baixa
Aluno* encontraPiorAluno(Aluno* vetor, int tamanho) {
    // Inicializando o ponteiro com o primeiro elemento do vetor
    Aluno* pior = &vetor[0];
    // Percorrendo o vetor com um ponteiro
    for (Aluno* p = vetor; p < vetor + tamanho; p++) {
        // Comparando as notas dos alunos
        if (p->nota < pior->nota) {
            // Atualizando o ponteiro com o aluno de menor nota
            pior = p;
        }
    }
    // Retornando o ponteiro para o pior aluno
    return pior;
}


int main(){

    system("chcp 1252"); 

    Aluno alunos[5];

    Aluno* pos = alunos;

    for (int i = 0; i < 5; i++){
        int matricula = 342431;
        float nota = 8.4;
        char nome[50] = "Jermilio";

        pos->matricula = matricula;
        pos->nota = nota;

        strcpy(pos->nome, nome);


        pos++;

        printf("Nome: %s, nota: %f, matricula: %d\n", pos->nome, pos->nota, pos->matricula);

    }

    


    return 0;
}