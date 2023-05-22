#include <stdio.h>
#include<math.h>
#include<locale.h>

/*faça um programa que gere os dez primeiros números primo acima de 100 e armazene-os em um vetor. 
Escreva no final o vetor resultante

Aluno: Arthur Augustinho dos Anjos
3° Periodo -- 2210974 */

int NPrimo(int num) {
    int i;
    if (num <= 1) {
        return 0;
    }
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int numerosPrimos[10]; 
    int contador = 0; 
    int numeroAtual = 101; 

    while (contador < 10) {
        if (NPrimo(numeroAtual)) {
            numerosPrimos[contador] = numeroAtual;
            contador++;
        }
        numeroAtual++;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", numerosPrimos[i]);
    }

    return 0;
}

