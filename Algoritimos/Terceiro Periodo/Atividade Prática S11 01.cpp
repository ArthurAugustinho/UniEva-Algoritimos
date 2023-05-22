#include <stdio.h>
#include <locale.h>
#define TAMANHO_VETOR 10

/*
Faça um programa que receba dez números inteiros e armazene-os em um vetor. 
Calcule e mostre dois vetores resultantes: o primeiro com os números pares e o segundo, 
com os números ímpares.

Aluno: Arthur Augustinho dos Anjos
3° Periodo -- 2210974 */

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numeros[TAMANHO_VETOR];
    int numerosPares[TAMANHO_VETOR];
    int numerosImpares[TAMANHO_VETOR];
    int indicePares = 0;
    int indiceImpares = 0;

    printf("Digite dez números inteiros:\n");

    // Receber os números e armazená-los no vetor
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Separar os números pares e ímpares em vetores distintos
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        if (numeros[i] % 2 == 0) {
            numerosPares[indicePares] = numeros[i];
            indicePares++;
        } else {
            numerosImpares[indiceImpares] = numeros[i];
            indiceImpares++;
        }
    }

    // Exibir o vetor com os números pares
    printf("\nNúmeros pares: ");
    for (int i = 0; i < indicePares; i++) {
        printf("%d ", numerosPares[i]);
    }

    // Exibir o vetor com os números ímpares
    printf("\nNúmeros ímpares: ");
    for (int i = 0; i < indiceImpares; i++) {
        printf("%d ", numerosImpares[i]);
    }

    printf("\n");

    return 0;
}

