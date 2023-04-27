#include<stdio.h>
#include<math.h>
#include<locale.h>

/*Fa�a um programa contendo uma sub-rotina que receba dois n�meros 
positivos por par�metro e retorne a soma dos n�meros inteiros existentes entre eles.
Aluno: Arthur Augustinho 
3� Periodo -- 2210974 */

int soma_entre_numeros(int numero1, int numero2) {
    int soma = 0;
    int i;
    
    // Verifica qual dos n�meros � o menor e qual � o maior
    int menor, maior;
    if (numero1 < numero2) {
        menor = numero1;
        maior = numero2;
    } else {
        menor = numero2;
        maior = numero1;
    }
    
    // Soma os n�meros inteiros entre o menor e o maior
    for (i = menor + 1; i < maior; i++) {
        soma += i;
    }
    
    return soma;
}

// Fun��o principal
int main() {
    int numero1, numero2, resultado;
    
    // Leitura dos n�meros
    printf("Digite o primeiro numero positivo: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero positivo: ");
    scanf("%d", &numero2);
    
    // Verifica��o da soma dos n�meros inteiros entre eles
    resultado = soma_entre_numeros(numero1, numero2);
    
    // Impress�o do resultado
    printf("A soma dos numeros inteiros entre %d e %d e %d.\n", numero1, numero2, resultado);
    
    return 0;
}
