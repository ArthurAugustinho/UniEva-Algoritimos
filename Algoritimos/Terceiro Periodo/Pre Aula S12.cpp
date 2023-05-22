#include<stdio.h>
#include<stdlib.h>

/*Crie estruturas para armazenar os seguintes dados de um Cliente, para uma loja de materiais de construção:

- IdCliente
- NomeCliente
- EndCliente
- CompCliente
- TelCliente
- EmailCliente

Os campos EndCliente e CompCliente devem também ser Structs com os seguintes campos, respectivamente: 
EndCliente(rua, numero, complemento, bairro, cidade e estado) e CompCliente(ItemComprado, 
DataCompra, QtdeItens, ValorUnitario, e totalCompra)

Aluno: Arthur Augustinho dos Anjos
3° Periodo -- 2210974 */

struct dados_cliente{
	int IdCliente;
	char NomeCliente[30];
	char TelCliente[11];
	char EmailCliente[20];
};

struct endereco_cliente{
	char estado[3];
	char cidade[10];
	char rua[15];
	char numero_casa[8];
	char bairro[20];
	char complemento[50];
	
};

struct compra_cliente{
	char item[50];
	int quantidade;
	float valor;
	float totalCompra;
	int dia;
	int mes;
	int ano;
};


int main(){
	
	struct dados_cliente cliente;
	struct endereco_cliente endereco;
	struct compra_cliente compra;
	
	printf("\n\n -------------- Cadastro De Clientes --------------\n\n");
	
	printf("Nome do cliente: ");
	gets(cliente.NomeCliente);
	
	printf("Digite o ID do cliente: ");
	scanf("%d", &cliente.IdCliente);
	
	printf("Telefone: ");
	scanf("%s",&cliente.TelCliente);
	
	printf("Email: ");
	scanf("%s",&cliente.EmailCliente);
	
	
	printf("\n\n -------------- Cadastrar Endereco --------------\n\n");
	
	
	printf("Estado (Digite a sigla): ");
	scanf("%s",endereco.estado);
	getchar();
	
	printf("Cidade: ");
	fgets(endereco.cidade, sizeof(endereco.cidade), stdin );
	
	printf("Bairro: ");
	gets(endereco.bairro);
	
	printf("Rua: ");
	gets(endereco.rua);
	
	printf("Numero da casa: ");
	gets(endereco.numero_casa);
	
	printf("Complemento: ");
	gets(endereco.complemento);
	
	printf("\n\n -------------- Cadastrar compra --------------\n\n");
	
	printf("Item: ");
	gets(compra.item);
	
	printf("Quantidade: ");
	scanf("%i",&compra.quantidade);
	
	printf("Valor: ");
	scanf("%f",&compra.valor);
	
	printf("Total da compra: ");
	scanf("%f",&compra.totalCompra);
	
	printf("Dia: ");
	scanf("%i",&compra.dia);
	
	printf("mes: ");
	scanf("%i",&compra.mes);
	
	printf("ano: ");
	scanf("%i",&compra.ano);
	
	printf("\n\n -------------- Cadastrar finalizado! --------------\n\n");	
}
