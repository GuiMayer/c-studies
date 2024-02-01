#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/* Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve
conter o número de matrícula do aluno, seu nome e as notas de três provas.
Agora, escreva um programa que leia os dados de cinco alunos e os armazene
nessa estrutura. Em seguida, exiba o nome e as notas do aluno que possui a maior
média geral dentre os cinco. */

typedef struct Aluno {
    int num_matricula;
    char nome[50];
    int notas[3];
} Aluno;

float calcular_media(int n[3]){
    return (n[0]+ n[1] + n[2]) / 3;
}

float max(const float valores[], int tamanho) {
    if (tamanho <= 0) {
        return -1; // Retorna um valor indicando erro se o tamanho for inválido
    }

    float maximo = valores[0]; // Supõe que o primeiro valor é o máximo inicialmente

    for (int i = 1; i < tamanho; i++) {
        if (valores[i] > maximo) {
            maximo = valores[i]; // Atualiza o máximo se um valor maior for encontrado
        }
    }

    return maximo; // Retorna o valor máximo encontrado
}

void ler_aluno(Aluno *a){
    int _num_matricula, _notas[3];
    char _nome[50];

    printf("Digite o nome do aluno:\n");
    fgets(_nome, sizeof(_nome), stdin);
    

    printf("Digite o numero de matricula do aluno: ");
    scanf("%i", &_num_matricula);

    printf("Digite as notas do aluno: ");
    scanf("%i%i%i", &_notas[0], &_notas[1], &_notas[2]);
    while (getchar() != '\n')

    (*a).num_matricula = _num_matricula;
    strcpy((*a).nome, _nome); // Usar strcpy para copiar a string
    memcpy((*a).notas, _notas, sizeof(_notas));

} 

void escrever_aluno(Aluno a){
    printf("Numero de matricula: %i\n", a.num_matricula);
    printf("Nome: %s", a.nome);
    printf("Notas: %i %i %i\n", a.notas[0], a.notas[1], a.notas[2]); 
}

int main()
{
    Aluno alunos[5];
    float maiores_medias = -1.0;
    int indice_melhor_aluno = -1;

    for (int i = 0; i <= 4; i++)
    {
        ler_aluno(&alunos[i]);
    }
    
    for (int i = 0; i <= 4; i++)
    {
        escrever_aluno(alunos[i]);
        printf("---o---\n");
    }
    float notas = {calcular_media(alunos[0].notas),
                calcular_media(alunos[1].notas),
                calcular_media(alunos[2].notas),
                calcular_media(alunos[3].notas),
                calcular_media(alunos[4].notas)};

    float maior = max(notas, 5);
    
    printf("Maior média: %f", maior);

    return 0;
}
