#include <stdio.h>
#include <locale.h>
#define SIZE 10

/*
Faça um programa que preencha uma matriz 10 x 10, com números inteiros. 
O Programa deverá mostrar a matriz preenchida, a matriz contendo somente os valores da DP - Diagonal Principal, 
a matriz contendo somente os valores da DS - Diagonal Secundária e uma matriz mostrando somente os valores das DP e DS.

Aluno: Arthur Augustinho dos Anjos
3° Periodo -- 2210974 */

void preencherMatriz(int matriz[SIZE][SIZE]) {
    printf("Preencha a matriz com números inteiros:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void exibirMatriz(int matriz[SIZE][SIZE]) {
    printf("Matriz:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void exibirDP(int matriz[SIZE][SIZE]) {
    printf("Diagonal Principal (DP):\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%4d ", matriz[i][i]);
    }
    printf("\n\n");
}

void exibirDS(int matriz[SIZE][SIZE]) {
    printf("Diagonal Secundária (DS):\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%4d ", matriz[i][SIZE - 1 - i]);
    }
    printf("\n\n");
}

void exibirDPeDS(int matriz[SIZE][SIZE]) {
    printf("Valores da DP e DS:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%4d ", matriz[i][i]);
        printf("%4d ", matriz[i][SIZE - 1 - i]);
        printf("\n");
    }
    printf("\n");
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int matriz[SIZE][SIZE];

    preencherMatriz(matriz);

    exibirMatriz(matriz);
    exibirDP(matriz);
    exibirDS(matriz);
    exibirDPeDS(matriz);

    return 0;
}

