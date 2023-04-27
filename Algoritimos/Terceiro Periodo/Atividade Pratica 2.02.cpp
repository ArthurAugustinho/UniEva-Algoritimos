#include<stdio.h>
#include<math.h>
#include<locale.h>

/*Faça um programa contendo uma sub-rotina que receba dois números 
positivos por parâmetro e retorne a soma dos números inteiros existentes entre eles.
Aluno: Arthur Augustinho 
3° Periodo -- 2210974 */

int soma_entre_numeros(int numero1, int numero2) {
    int soma = 0;
    int i;
    
    // Verifica qual dos números é o menor e qual é o maior
    int menor, maior;
    if (numero1 < numero2) {
        menor = numero1;
        maior = numero2;
    } else {
        menor = numero2;
        maior = numero1;
    }
    
    // Soma os números inteiros entre o menor e o maior
    for (i = menor + 1; i < maior; i++) {
        soma += i;
    }
    
    return soma;
}

// Função principal
int main() {
    int numero1, numero2, resultado;
    
    // Leitura dos números
    printf("Digite o primeiro numero positivo: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero positivo: ");
    scanf("%d", &numero2);
    
    // Verificação da soma dos números inteiros entre eles
    resultado = soma_entre_numeros(numero1, numero2);
    
    // Impressão do resultado
    printf("A soma dos numeros inteiros entre %d e %d e %d.\n", numero1, numero2, resultado);
    
    return 0;
}
