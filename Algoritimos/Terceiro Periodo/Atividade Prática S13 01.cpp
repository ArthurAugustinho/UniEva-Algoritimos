#include <stdio.h>
#include <locale.h>
#define SIZE 15

/*Faça um programa que leia um vetor com quinze posições para números inteiros. 
Crie, a seguir, um vetor resultante que contenha todos os números primos do vetor digitado. 
Escreva o vetor resultante.

Aluno: Arthur Augustinho 
3° Periodo -- 2210974 */

int isPrime(int num) {
    if (num < 2)
        return 0;

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

void findPrimes(int vetor[], int vetorPrimos[], int *tamPrimos) {
    *tamPrimos = 0;

    for (int i = 0; i < SIZE; i++) {
        if (isPrime(vetor[i])) {
            vetorPrimos[*tamPrimos] = vetor[i];
            (*tamPrimos)++;
        }
    }
}

void printVetor(int vetor[], int tamanho) {
    printf("Vetor Resultante:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetor[SIZE];
    int vetorPrimos[SIZE];
    int tamPrimos;

    printf("Digite %d números inteiros:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    findPrimes(vetor, vetorPrimos, &tamPrimos);

    printVetor(vetorPrimos, tamPrimos);

    return 0;
}

