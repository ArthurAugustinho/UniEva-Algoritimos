#include <stdio.h>
#include <locale.h>
#define TAMANHO_VETOR 15

/*
Fa�a um programa que leia um vetor com quinze posi��es para n�meros inteiros. 
Depois da leitura, divida todos os seus elementos pelo maior valor do vetor. 
Mostre o vetor ap�s os c�lculos.

Aluno: Arthur Augustinho dos Anjos
3� Periodo -- 2210974 */

int main() {
	setlocale(LC_ALL, "Portuguese");
    int vetor[TAMANHO_VETOR];
    int maior = 0;

    printf("Digite os valores do vetor:\n");

    // Ler os valores do vetor
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);

        // Encontrar o maior valor do vetor
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    printf("\nVetor original: ");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d ", vetor[i]);
    }

    // Dividir todos os elementos pelo maior valor
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        vetor[i] /= maior;
    }

    printf("\n\nVetor ap�s os c�lculos: ");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}

