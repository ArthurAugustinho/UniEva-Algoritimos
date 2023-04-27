#include<stdio.h>
#include<math.h>
#include<locale.h>

/* Crie um programa em C que receba tr�s valores (obrigatoriamente maiores que zero), 
representando as medi- das tr�s lados de um tri�ngulo. Elabore sub-rotinas para: 
determinar se esses lados formam um tri�ngulo (sabe-se que, para ser triangulo, 
a medida de um lado qualquer deve ser inferior ou igual 4 soma das medidas dos outros dois). 
determinar e mostrar o tipo de tri�ngulo (equil�tero, is�sceles ou escaleno), 
caso as medidas formem um tri�ngulo. Todas as mensagens devem ser gravadas no programa principal.
Aluno: Arthur Augustinho 
3� Periodo -- 2210974 */

// Sub-rotina que verifica se os tr�s lados informados formam um tri�ngulo
int verifica_triangulo(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return 0; // Lados inv�lidos
    } else if (a > b + c || b > a + c || c > a + b) {
        return 0; // N�o forma um tri�ngulo
    } else {
        return 1; // Forma um tri�ngulo
    }
}

// Sub-rotina que determina e mostra o tipo de tri�ngulo (equil�tero, is�sceles ou escaleno)
void tipo_triangulo(int a, int b, int c) {
    if (a == b && b == c) {
        printf("O triangulo e equilatero.\n");
    } else if (a == b || a == c || b == c) {
        printf("O triangulo e isosceles.\n");
    } else {
        printf("O triangulo e escaleno.\n");
    }
}

// Fun��o principal
int main() {
    int a, b, c;
    
    // Leitura das medidas dos lados do tri�ngulo
    printf("Digite as medidas dos tres lados do triangulo:\n");
    printf("Lado A: ");
    scanf("%d", &a);
    printf("Lado B: ");
    scanf("%d", &b);
    printf("Lado C: ");
    scanf("%d", &c);
    
    // Verifica��o se os lados informados formam um tri�ngulo
    if (verifica_triangulo(a, b, c)) {
        // Determina��o e impress�o do tipo de tri�ngulo
        tipo_triangulo(a, b, c);
    } else {
        printf("Os lados informados nao formam um triangulo.\n");
    }
    
    return 0;
}
