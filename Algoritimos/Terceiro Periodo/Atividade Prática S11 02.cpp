#include <stdio.h>
#include <locale.h>
#define TAMANHO_VETOR 10

/*
Faça um programa que preencha dois vetores de dez posições cada, determine e mostre um terceiro contendo os 
elementos dos dois vetores anteriores ordenados de maneira decrescente.

Aluno: Arthur Augustinho dos Anjos
3° Periodo -- 2210974 */

void ordenarVetorDecrescente(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - 1 - i; j++) {
            if (vetor[j] < vetor[j + 1]) {
                // Trocar os elementos de posição
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetor1[TAMANHO_VETOR];
    int vetor2[TAMANHO_VETOR];
    int vetorOrdenado[2 * TAMANHO_VETOR];

    printf("Preencha o primeiro vetor:\n");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    printf("\nPreencha o segundo vetor:\n");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    // Copiar os elementos dos vetores anteriores para o vetor ordenado
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        vetorOrdenado[i] = vetor1[i];
        vetorOrdenado[TAMANHO_VETOR + i] = vetor2[i];
    }

    // Ordenar o vetor ordenado em ordem decrescente
    ordenarVetorDecrescente(vetorOrdenado, 2 * TAMANHO_VETOR);

    printf("\nVetor ordenado de maneira decrescente:\n");
    for (int i = 0; i < 2 * TAMANHO_VETOR; i++) {
        printf("%d ", vetorOrdenado[i]);
    }

    printf("\n");

    return 0;
}

