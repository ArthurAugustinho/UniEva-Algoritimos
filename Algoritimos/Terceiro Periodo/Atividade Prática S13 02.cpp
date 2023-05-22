#include <stdio.h>
#include <locale.h>
#define SIZE 15

/*Fa�a um programa que leia um vetor com quinze posi��es para n�meros inteiros. 
Depois da leitura, d�vida todos os seus elementos pelo maior valor do vetor. 
Mostre o vetor ap�s os c�lculos.

Aluno: Arthur Augustinho 
3� Periodo -- 2210974 */

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
    printf("Vetor Ap�s os C�lculos:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetor[SIZE];

    printf("Digite %d n�meros inteiros:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("N�mero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    dividePorMaior(vetor);

    printVetor(vetor);

    return 0;
}

