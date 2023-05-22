#include <stdio.h>
#include<math.h>
#include<locale.h>

#define MAX_CONTAS 2

/*Faca um programa que simule um controle banc�rio. Para tanto, devem ser lidos os c�digos de dez contas e seus respectivos saldos. 
Os codigos devem ser armazenados em um vetor de n�meros inteiros (nao pode haver mais de uma conta com o mesmo c�digo) 
e os saldos devem ser armazenados em um vetor de n�meros reais. O saldo deve ser cadastrado na mesma posicao do codigo. 
Por exemplo, se a conta 504 foi armazenada na quinta posicao do vetor de codigos, seu saldo devera ficar na quinta posicao do vetor de saldos. 
Depois de fazer a leitura dos valores, devera aparecer o seguinte menu na tela: 

1. Efetuar dep�sito 
2. Efetuar saque 
3. Consultar o ativo bancario, ou seja, o somatorio dos saldos de todos os clientes 
4, Finalizar o programa 

- Para efetuar dep�sito, deve-se solicitar o c�digo da conta e o valor a ser depositado. 
Se a conta nao estiver cadastrada, devera aparecer a mensagem Conta nao encontrada e voltar ao menu, 
se a conta existir, atualizar seu saldo. 

- Para efetuar saque, deve-se solicitar o c�digo da conta e o valor a ser sacado. 
Se a conta nao estiver cadastrada, dever� aparecer a mensagem Conta nao encontrada e voltar ao menu. 
Se a conta existir, verificar se o seu saldo � suficiente para cobrir o saque. 
(Estamos supondo que a conta nao possa ficar com o saldo negativo). 
Se o saldo for suficiente, realizar o saque e voltar ao menu. 
Caso contrario, mostrar a mensagem saldo insuficiente e volta ao menu.

- Para consultar o ativo bancario, deve-se somar o saldo de todas as contas do banco. 
Depois de mostrar esse valor, voltar ao menu.

- O programa so termina quando for digitada a opcao 4 � Finalizar 0 programa.

Aluno: Arthur Augustinho dos Anjos
3� Periodo -- 2210974 */

// Fun��o para encontrar a posi��o de uma conta no vetor de c�digos
int encontrarPosicaoConta(int codigo, int codigosContas[]) {
    for (int i = 0; i < MAX_CONTAS; i++) {
        if (codigosContas[i] == codigo) {
            return i;
        }
    }
    return -1; // Retornar -1 se a conta n�o for encontrada
}

// Fun��o para efetuar o dep�sito em uma conta
void efetuarDeposito(int codigosContas[], float saldosContas[]) {
    int codigo;
    float valor;

    printf("Digite o codigo da conta: ");
    scanf("%d", &codigo);

    int posicao = encontrarPosicaoConta(codigo, codigosContas);
    if (posicao == -1) {
        printf("Conta nao encontrada.\n");
        return;
    }

    printf("Digite o valor a ser depositado: ");
    scanf("%f", &valor);

    saldosContas[posicao] += valor;
    printf("Deposito efetuado com sucesso.\n");
}

// Fun��o para efetuar o saque de uma conta
void efetuarSaque(int codigosContas[], float saldosContas[]) {
    int codigo;
    float valor;

    printf("Digite o codigo da conta: ");
    scanf("%d", &codigo);

    int posicao = encontrarPosicaoConta(codigo, codigosContas);
    if (posicao == -1) {
        printf("Conta nao encontrada.\n");
        return;
    }

    printf("Digite o valor a ser sacado: ");
    scanf("%f", &valor);

    if (saldosContas[posicao] >= valor) {
        saldosContas[posicao] -= valor;
        printf("Saque efetuado com sucesso.\n");
    } else {
        printf("Saldo insuficiente.\n");
    }
}

// Fun��o para calcular o ativo banc�rio
float calcularAtivoBancario(float saldosContas[]) {
    float ativo = 0;
    for (int i = 0; i < MAX_CONTAS; i++) {
        ativo += saldosContas[i];
    }
    return ativo;
}

int main() {
    int codigosContas[MAX_CONTAS];
    float saldosContas[MAX_CONTAS];

    // Leitura dos valores iniciais das contas
    printf("Digite os codigos e saldos das contas:\n");
    for (int i = 0; i < MAX_CONTAS; i++) {
        printf("Conta %d:\n", i + 1);
        scanf("%d", &codigosContas[i]);
        scanf("%f", &saldosContas[i]);
    }

    int opcao;
    do {
        printf("\nMenu:\n");
        printf("1. Efetuar deposito\n");
        printf("2. Efetuar saque\n");
        printf("3. Consultar o ativo bancario\n");
        printf("4. Finalizar o programa\n");
        printf("Digite a op�ao desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                efetuarDeposito(codigosContas, saldosContas);
                break;
            case 2:
                efetuarSaque(codigosContas, saldosContas);
                break;
            case 3:
                printf("Ativo bancario: %.2f\n", calcularAtivoBancario(saldosContas));
                break;
            case 4:
                printf("Programa finalizado.\n");
                break;
            default:
                printf("Op�ao invalida.\n");
        }
    } while (opcao != 4);

    return 0;
}
