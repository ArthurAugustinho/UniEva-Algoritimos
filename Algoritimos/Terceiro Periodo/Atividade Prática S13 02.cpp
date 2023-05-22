#include <stdio.h>
#include <locale.h>
#define SIZE 15

/*Faça um programa que leia um vetor com quinze posições para números inteiros. 
Depois da leitura, dívida todos os seus elementos pelo maior valor do vetor. 
Mostre o vetor após os cálculos.

Aluno: Arthur Augustinho 
3° Periodo -- 2210974 */

void dividePorMaior(int vetor[]) {
    int maior = vetor[0];

    for (int i = 1; i < SIZE; i++) {
        if (vetor[i] > maior)
            maior = vetor[i];
    }

    for (int i = 0; i < SIZE; i++) {
        vetor[i] /= maior;
    }
}

void printVetor(int vetor[]) {
    printf("Vetor Após os Cálculos:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetor[SIZE];

    printf("Digite %d números inteiros:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    dividePorMaior(vetor);

    printVetor(vetor);

    return 0;
}

