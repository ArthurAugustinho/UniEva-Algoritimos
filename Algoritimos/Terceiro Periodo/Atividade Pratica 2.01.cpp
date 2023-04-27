#include<stdio.h>
#include<math.h>
#include<locale.h>

/*Faça um programa contendo uma sub-rotina que retorne 1 se o número digitado para positivo ou 0 se para negativo
Aluno: Arthur Augustinho 
3° Periodo -- 2210974 */

int verifica_sinal(int numero) {
    if (numero >= 0) {
        return 1;
    } else {
        return 0;
    }
}

// Função principal
int main() {
    int numero, resultado;
    
    // Leitura do número a ser verificado
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    // Verificação do sinal do número
    resultado = verifica_sinal(numero);
    
    // Impressão do resultado
    if (resultado == 1) {
        printf("O numero digitado e positivo.\n");
    } else {
        printf("O numero digitado e negativo.\n");
    }
    
    return 0;
}

