#include<stdio.h>
#include<math.h>
#include<locale.h>

/*Fa�a um programa contendo uma sub-rotina que retorne 1 se o n�mero digitado para positivo ou 0 se para negativo
Aluno: Arthur Augustinho 
3� Periodo -- 2210974 */

int verifica_sinal(int numero) {
    if (numero >= 0) {
        return 1;
    } else {
        return 0;
    }
}

// Fun��o principal
int main() {
    int numero, resultado;
    
    // Leitura do n�mero a ser verificado
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    // Verifica��o do sinal do n�mero
    resultado = verifica_sinal(numero);
    
    // Impress�o do resultado
    if (resultado == 1) {
        printf("O numero digitado e positivo.\n");
    } else {
        printf("O numero digitado e negativo.\n");
    }
    
    return 0;
}

