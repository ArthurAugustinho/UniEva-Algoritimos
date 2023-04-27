#include<stdio.h>
#include<math.h>
#include<locale.h>

/* Crie um programa em C que receba três valores (obrigatoriamente maiores que zero), 
representando as medi- das três lados de um triângulo. Elabore sub-rotinas para: 
determinar se esses lados formam um triângulo (sabe-se que, para ser triangulo, 
a medida de um lado qualquer deve ser inferior ou igual 4 soma das medidas dos outros dois). 
determinar e mostrar o tipo de triângulo (equilátero, isósceles ou escaleno), 
caso as medidas formem um triângulo. Todas as mensagens devem ser gravadas no programa principal.
Aluno: Arthur Augustinho 
3° Periodo -- 2210974 */

// Sub-rotina que verifica se os três lados informados formam um triângulo
int verifica_triangulo(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return 0; // Lados inválidos
    } else if (a > b + c || b > a + c || c > a + b) {
        return 0; // Não forma um triângulo
    } else {
        return 1; // Forma um triângulo
    }
}

// Sub-rotina que determina e mostra o tipo de triângulo (equilátero, isósceles ou escaleno)
void tipo_triangulo(int a, int b, int c) {
    if (a == b && b == c) {
        printf("O triangulo e equilatero.\n");
    } else if (a == b || a == c || b == c) {
        printf("O triangulo e isosceles.\n");
    } else {
        printf("O triangulo e escaleno.\n");
    }
}

// Função principal
int main() {
    int a, b, c;
    
    // Leitura das medidas dos lados do triângulo
    printf("Digite as medidas dos tres lados do triangulo:\n");
    printf("Lado A: ");
    scanf("%d", &a);
    printf("Lado B: ");
    scanf("%d", &b);
    printf("Lado C: ");
    scanf("%d", &c);
    
    // Verificação se os lados informados formam um triângulo
    if (verifica_triangulo(a, b, c)) {
        // Determinação e impressão do tipo de triângulo
        tipo_triangulo(a, b, c);
    } else {
        printf("Os lados informados nao formam um triangulo.\n");
    }
    
    return 0;
}
