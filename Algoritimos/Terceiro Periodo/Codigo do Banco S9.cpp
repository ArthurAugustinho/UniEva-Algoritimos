#include <stdio.h>
#include<locale.h>
#include<stdlib.h>

/*  Fa�a um programa que simule um controle banc�rio. Para tanto, devem ser lidos os c�digos de dez contas e seus respectivos saldos. 
Os c�digos devem ser armazenados em um vetor de n�meros inteiros (n�o pode haver mais de uma conta com o mesmo c�digo) e os saldos devem 
ser armazenados em um vetor de n�meros reais. O saldo dever� ser cadastrado na mesma posi��o do c�digo. Por exemplo, se a conta 504 foi 
armazenada na quinta posi��o do vetor de c�digos, seu saldo dever� ficar na quinta posi��o do vetor de saldos. 
Depois de fazer a leitura dos valores, dever� aparecer o seguinte menu na tela:

1. Efetuar dep�sito
2. Efetuar saque
3. Consultar o ativo banc�rio, ou seja, o somat�rio dos saldos de todos os clientes
4. Finalizar o programa

para efetuar dep�sito, deve-se solicitar o c�digo da conta e o valor a ser depositado. 
Se a conta n�o estiver cadastrada, dever� aparecer a mensagem Conta n�o encontrada e voltar ao menu. Se a conta existir, atualizar seu saldo;
para efetuar saque, deve-se solicitar o c�digo da conta e o valor a ser sacado. 
Se a conta n�o esti- ver cadastrada, dever� aparecer a mensagem Conta n�o encontrada e voltar ao menu. 
Se a conta existir, verificar se o seu saldo � suficiente para cobrir o saque. (Estamos supondo que a conta n�o possa ficar com o saldo negativo.) 
Se o saldo for suficiente, realizar o saque e voltar ao menu. 
Caso contr�rio, mostrar a mensagem Saldo insuficiente e voltar ao menu;para consultar o ativo banc�rio, 
deve-se somar o saldo de todas as contas do banco. Depois de mostrar esse valor, voltar ao menu;
o programa s� termina quando for digitada a op��o 4- Finalizar o programa.  

Aluno: Arthur Augustinho dos Anjos
3� Periodo -- 2210974 */

void contasBancarias(int codigoContas[], float saldoContas[]) {
    int i, j;

    printf("\nDigite o codigo da conta 1: ");
    scanf("%i", &codigoContas[0]);

    for (i = 1; i < 10; i++) {
        int codigoDuplicado;

        do {
            codigoDuplicado = 0;  // Inicializa a vari�vel como n�o duplicada

            printf("\nDigite o codigo da conta %i: ", i + 1);
            scanf("%i", &codigoContas[i]);

            for (j = 0; j < i; j++) {
                if (codigoContas[i] == codigoContas[j]) {
                    printf("\n *CODIGO JA EXISTENTE! DIGITE NOVAMENTE* \n");
                    codigoDuplicado = 1;  // Define a vari�vel como duplicada
                    break;
                }
            }
        } while (codigoDuplicado);  // Repete a leitura at� que o c�digo n�o seja duplicado

    }
    
    printf("\n* Digite o saldo * ");
    for (i = 0; i < 10; i++){
    	printf("\nDigite o saldo da conta codigo %i: ",codigoContas[i]);
    	scanf("%f",&saldoContas[i]);
	}
    
    
}

void efetuarDeposito(int codigoContas[], float saldoContas[], int conta){
	int i;
	float valor;
	
	printf("\nDigite o codigo da conta para deposito: ");
	scanf("%i",&conta);
	
	for(i=0; i<10; i++){
		
		if(conta == codigoContas[i]){
			printf("\nSaldo atual: %.2f R$\n",saldoContas[conta]);
			printf("\n Digite o Valor do Deposito: ");
			scanf("%f",&valor);
			saldoContas[i] +=  valor;
			
			printf("\nDEPOSITO EFETUADO COM SUCESSO!\n");
			printf("Seu saldo agora e %.2f R$\n",saldoContas[i]);
			break;
			
		}
		
		if(conta != codigoContas[i] && i == 9 ){
			printf("\nCONTA NAO ENCONTRADA! ");
			break;
		}
	}
}

void saque(int codigoContas[], float saldoContas[]){
	int conta, i;
	float valor;
	
	printf("\nDigite o codigo da conta para saque: ");
	scanf("%i",&conta);
	
		for(i=0; i<10; i++){
		
		if(conta == codigoContas[i]){
			printf("\n Valor disponivel para saque: %.2f R$",saldoContas[i]);
			printf("\n Digite o Valor do saque: ");
			scanf("%f",&valor);
			if(valor > saldoContas[i]){
				printf("\nSALDO INSUFICIENTE!\n");
				break;
			}
			else{
				saldoContas[i] -=  valor;
				printf("\nSAQUE EFETUADO COM SUCESSO!\n");
				printf("\nSeu saldo agora e: %.2f R$\n",saldoContas[i]);
				break;
			}
			
		}
		
		if(conta != codigoContas[i] && i == 9 ){
			printf("\nCONTA NAO ENCONTRADA! ");
			break;
		}
		
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    int codigoContas[10], opcao, conta;
    float saldoContas[10];

    contasBancarias(codigoContas, saldoContas);
	
	while(opcao != 4){
		printf("\n1. Efetuar dep�sito\n2. Efetuar saque\n3. Consultar o ativo banc�rio\n4. Finalizar o programa: ");
		scanf("%i",&opcao);
		
		switch(opcao){
			
			case 1:
				printf("\nOpcao selecionada: Efetuar deposito*");
				efetuarDeposito(codigoContas, saldoContas, conta);
				break;
			case 2:
				printf("\nOpcao selecionada: Efetuar saque*");
				saque(codigoContas, saldoContas);
				break;
			case 3: 
				printf("\nOpcao selecionada: Consultar ativos bancarios*");
				int i;
				float ativos;
				for(i=0; i<10; i++){
					ativos += saldoContas[i];
				}
				printf("\nO total de ativos bancarios e: %f R$\n",ativos);
				break;
	}	
	}
    printf("\nPrograma finalizado!\n");
}



