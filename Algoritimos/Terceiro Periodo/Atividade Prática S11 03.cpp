#include <stdio.h>
#include <locale.h>
#define LINHAS 2
#define COLUNAS 2

/*
Faça um programa que preencha uma matriz M (2 x 2), calcule e mostre a matriz R, 
resultante da multiplicação dos elementos de M pelo seu maior elemento.

Aluno: Arthur Augustinho dos Anjos
3° Periodo -- 2210974 */

void multiplicarPorMaiorElemento(int matriz[LINHAS][COLUNAS], int maiorElemento) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matriz[i][j] *= maiorElemento;
        }
    }
}

int encontrarMaiorElemento(int matriz[LINHAS][COLUNAS]) {
    int maior = matriz[0][0];

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    return maior;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int matrizM[LINHAS][COLUNAS];
    int matrizR[LINHAS][COLUNAS];

    // Preencher a matriz M
    printf("Preencha a matriz M (2x2):\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("Valor [%d][%d]: ", i, j);
            scanf("%d", &matrizM[i][j]);
        }
    }

    // Encontrar o maior elemento da matriz M
    int maiorElemento = encontrarMaiorElemento(matrizM);

    // Multiplicar os elementos de M pelo maior elemento e armazenar em R
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matrizR[i][j] = matrizM[i][j] * maiorElemento;
        }
    }

    // Exibir a matriz R
    printf("\nMatriz R resultante da multiplicação de M pelo seu maior elemento:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", matrizR[i][j]);
        }
        printf("\n");
    }

    return 0;
}

