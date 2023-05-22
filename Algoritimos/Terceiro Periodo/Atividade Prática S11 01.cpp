#include <stdio.h>
#include <locale.h>
#define TAMANHO_VETOR 10

/*
Fa�a um programa que receba dez n�meros inteiros e armazene-os em um vetor. 
Calcule e mostre dois vetores resultantes: o primeiro com os n�meros pares e o segundo, 
com os n�meros �mpares.

Aluno: Arthur Augustinho dos Anjos
3� Periodo -- 2210974 */

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numeros[TAMANHO_VETOR];
    int numerosPares[TAMANHO_VETOR];
    int numerosImpares[TAMANHO_VETOR];
    int indicePares = 0;
    int indiceImpares = 0;

    printf("Digite dez n�meros inteiros:\n");

    // Receber os n�meros e armazen�-los no vetor
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("N�mero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Separar os n�meros pares e �mpares em vetores distintos
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        if (numeros[i] % 2 == 0) {
            numerosPares[indicePares] = numeros[i];
            indicePares++;
        } else {
            numerosImpares[indiceImpares] = numeros[i];
            indiceImpares++;
        }
    }

    // Exibir o vetor com os n�meros pares
    printf("\nN�meros pares: ");
    for (int i = 0; i < indicePares; i++) {
        printf("%d ", numerosPares[i]);
    }

    // Exibir o vetor com os n�meros �mpares
    printf("\nN�meros �mpares: ");
    for (int i = 0; i < indiceImpares; i++) {
        printf("%d ", numerosImpares[i]);
    }

    printf("\n");

    return 0;
}

