#include <stdio.h>
#include <locale.h>
#define ALUNOS 10
#define PROVAS 3

/*
Faça um programa que preencha uma matriz 10 × 3 com as notas de dez alunos em três provas. 
O programa deverá mostrar um relatório com o número dos alunos (número da linha) e a prova em que cada aluno obteve menor nota. 
Ao final do relatório, deverá mostrar quantos alunos tiveram menor nota em cada 
uma das provas: na prova 1, na prova 2 e na prova 3.

Aluno: Arthur Augustinho dos Anjos
3° Periodo -- 2210974 */

void preencherNotas(float matriz[ALUNOS][PROVAS]) {
    for (int i = 0; i < ALUNOS; i++) {
        printf("Aluno %d:\n", i + 1);
        for (int j = 0; j < PROVAS; j++) {
            printf("Nota da prova %d: ", j + 1);
            scanf("%f", &matriz[i][j]);
        }
    }
}

void gerarRelatorio(float matriz[ALUNOS][PROVAS]) {
    int menorNota[ALUNOS];
    int provaMenorNota[ALUNOS];
    int contagemProva1 = 0, contagemProva2 = 0, contagemProva3 = 0;

    for (int i = 0; i < ALUNOS; i++) {
        menorNota[i] = matriz[i][0];
        provaMenorNota[i] = 1;

        for (int j = 1; j < PROVAS; j++) {
            if (matriz[i][j] < menorNota[i]) {
                menorNota[i] = matriz[i][j];
                provaMenorNota[i] = j + 1;
            }
        }

        if (provaMenorNota[i] == 1) {
            contagemProva1++;
        } else if (provaMenorNota[i] == 2) {
            contagemProva2++;
        } else if (provaMenorNota[i] == 3) {
            contagemProva3++;
        }
    }

    printf("\nRELATÓRIO:\n");
    for (int i = 0; i < ALUNOS; i++) {
        printf("Aluno %d - Prova %d\n", i + 1, provaMenorNota[i]);
    }

    printf("\nQuantidade de alunos com menor nota em cada prova:\n");
    printf("Prova 1: %d aluno(s)\n", contagemProva1);
    printf("Prova 2: %d aluno(s)\n", contagemProva2);
    printf("Prova 3: %d aluno(s)\n", contagemProva3);
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    float notas[ALUNOS][PROVAS];

    printf("Preencha as notas dos alunos:\n");
    preencherNotas(notas);

    gerarRelatorio(notas);

    return 0;
}

