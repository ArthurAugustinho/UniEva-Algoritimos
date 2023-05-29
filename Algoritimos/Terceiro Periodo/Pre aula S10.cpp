#include<stdio.h>
#define max 2

/* Faça um programa que preencha:
- Um vetor com os nomes de cinco produtos;
- Uma matriz 5 x 4 com os preços dos cinco produtos em quatro lojas diferentes;
- Outro vetor com o custo do transporte dos cinco produtos.

O programa deverá preencher uma segunda matriz 5 X 4 com os valores dos impostos de cada produto, de acordo com a tabela a seguir:

PREÇO                                      % DE IMPOSTO
Até R$ 50,00                                    5
Entre R$ 50,00 e R$ 100,00 (inclusive)         10
Acima de R$ 100,00                             20

O programa deverá mostrar, ainda, um relatório com o nome do produto, o número da loja onde o 
produto é encontrado,o valor do imposto a pagar, o custo de transporte, o preço e o preço final (preço 
acrescido do valor do imposto e do custo do transporte).

Aluno: Arthur Augustinho dos Anjos
3° Periodo -- 2210974 */

void cadastrarProdutos(char produtos[][20], float precosEmLojasDiferentes[5][4]) {
    int i, j;

    for(i = 0; i < max; i++) {
        printf("Cadastrar produto %i: ", i + 1);
        gets(produtos[i]);
    }
    
    for(i = 0; i < max; i++){
    	for(j=0; j< 4; j++){
    		printf("\nDigite o preco do %s na loja %i: ",produtos[i],j+1);
    		scanf("%f",&precosEmLojasDiferentes[i][j]);
		}
	}
}


void custoTransporte(float custoDoTransporte[5], char produtos[][20]){
	int i;
	
	for(i = 0; i < max; i++){
		printf("\nDigite o custo do trasporte para o %s: ",produtos[i]);
		scanf("%f",&custoDoTransporte[i]);
	}
}

void calc(char produtos[][20], float precosEmLojasDiferentes[5][4], float valorImposto[5][4]){
	int i, j;
	
	
	for(i=0; i<max; i++){
		for(j=0; j<4; j++){
			if(precosEmLojasDiferentes[i][j] < 50){
				valorImposto[i][j] = (precosEmLojasDiferentes[i][j]*5)/100 + precosEmLojasDiferentes[i][j];
			}
			if(precosEmLojasDiferentes[i][j] >= 50 && precosEmLojasDiferentes[i][j] <= 100 ){
				valorImposto[i][j] = (precosEmLojasDiferentes[i][j]*10)/100 + precosEmLojasDiferentes[i][j];
			}
			if(precosEmLojasDiferentes[i][j] > 100){
				valorImposto[i][j] = (precosEmLojasDiferentes[i][j]*20)/100 + precosEmLojasDiferentes[i][j];
			}
			
			
		}
	}
	
	
}

int main() {
    char produtos[5][20];
    float precosEmLojasDiferentes[5][4], custoDoTransporte[5], valorImposto[5][4];
    int i, j;
    cadastrarProdutos(produtos, precosEmLojasDiferentes);
	
	custoTransporte(custoDoTransporte, produtos);
	calc(produtos, precosEmLojasDiferentes, valorImposto);
	printf("\nRELATORIO:\n");
 printf("\tLoja 1   Loja 2    Loja 3    Loja 4    Imposto    transporte    preco final\n");
    for(i = 0; i < max; i++){
        printf("%s\t", produtos[i]);
        for(j = 0; j < 4; j++){
            printf("%.2f R$   ", precosEmLojasDiferentes[i][j]);
            if(j == 3 ){
            	printf("%.2f R$",valorImposto[i][j]);
            	printf("   %.2f R$",custoDoTransporte[i]);
            	printf("      %.2f R$",precosEmLojasDiferentes[i][j] + valorImposto[i][j] + custoDoTransporte[i]);
			}
        }
        
        printf("\n");
    }
	
}

