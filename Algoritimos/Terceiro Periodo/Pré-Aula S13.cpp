#include <stdio.h>
#include <locale.h>
#define ROWS 10
#define COLS 20

/*Crie um programa que preencha uma matriz 10 x 20 com números inteiros e some cada uma das linhas, 
armazenando o resultado das somas em um vetor. A seguir, o programa devera multiplicar cada elemento da matriz pela 
soma da linha correspondente e mostrar a matriz resultante.

Aluno: Arthur Augustinho 
3° Periodo -- 2210974 */

void preencherMatriz(int matriz[ROWS][COLS]) {
    printf("Preencha a matriz com números inteiros:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void calcularSomaLinhas(int matriz[ROWS][COLS], int vetorSomaLinhas[ROWS]) {
    for (int i = 0; i < ROWS; i++) {
        int somaLinha = 0;
        for (int j = 0; j < COLS; j++) {
            somaLinha += matriz[i][j];
        }
        vetorSomaLinhas[i] = somaLinha;
    }
}

void multiplicarPorSomaLinha(int matriz[ROWS][COLS], int vetorSomaLinhas[ROWS]) {
    printf("\nMatriz Resultante:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matriz[i][j] *= vetorSomaLinhas[i];
            printf("%6d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int matriz[ROWS][COLS];
    int vetorSomaLinhas[ROWS];

    preencherMatriz(matriz);
    calcularSomaLinhas(matriz, vetorSomaLinhas);
    multiplicarPorSomaLinha(matriz, vetorSomaLinhas);

    return 0;
}

