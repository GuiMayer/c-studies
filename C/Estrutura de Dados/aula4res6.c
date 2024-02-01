#include <stdio.h>
#include <string.h>

typedef struct Aluno {
    int num_matricula;
    char nome[50];
    int notas[3];
} Aluno;

float calcular_media(int n[3]) {
    return (float)(n[0] + n[1] + n[2]) / 3;
}

int main() {
    int i;
    Aluno alunos[5];
    float maiores_medias = -1.0; // Inicialize com um valor negativo para garantir que qualquer média seja maior

    for (i = 0; i < 5; i++) {
        int _num_matricula, _notas[3];
        char _nome[50];

        printf("Digite o nome do aluno:\n");
        fgets(_nome, sizeof(_nome), stdin);

        printf("Digite o numero de matricula do aluno: ");
        scanf("%i", &_num_matricula);
        /* while (getchar() != '\n');  */// Limpe o buffer de entrada
        fflush(stdin);

        printf("Digite as notas do aluno: ");
        scanf("%i%i%i", &_notas[0], &_notas[1], &_notas[2]);
        /* while (getchar() != '\n'); */ // Limpe o buffer de entrada
        fflush(stdin);

        alunos[i].num_matricula = _num_matricula;
        strcpy(alunos[i].nome, _nome); // Usar strcpy para copiar a string
        /* memcpy(alunos[i].notas, _notas, sizeof(_notas)); */
        fflush(stdin);

        float media = calcular_media(alunos[i].notas);
        printf("Média do aluno %s: %.2f\n", alunos[i].nome, media);

        if (media > maiores_medias) {
            maiores_medias = media;
        }
    }

    printf("\nAlunos com a maior média:\n");
    for (i = 0; i < 5; i++) {
        if (calcular_media(alunos[i].notas) == maiores_medias) {
            printf("Nome: %s", alunos[i].nome);
            printf("Número de matrícula: %i\n", alunos[i].num_matricula);
            printf("Média: %.2f\n", maiores_medias);
        }
    }

    return 0;
}
