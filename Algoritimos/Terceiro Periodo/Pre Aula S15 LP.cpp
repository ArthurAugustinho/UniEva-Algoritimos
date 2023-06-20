#include<stdio.h>
#include<math.h>
#include<locale.h>
#define MAX 100

/*Crie uma struct para armazenar dados de 1(um) cliente. A struct deverá ter os seguintes campos:

- Nome
- Idade
- CPF 
- Endereço
- Telefone
- sexo

Arthur Augustinho dos Anjos
Matricula: 2210974
*/

struct Cliente {
    char nome[MAX];
    int idade;
    char cpf[MAX];
    char endereco[MAX];
    char telefone[MAX];
    char sexo;
};

int main() {
    struct Cliente cliente;

    printf("Digite o nome do cliente: ");
    fgets(cliente.nome, MAX, stdin);

    printf("Digite a idade do cliente: ");
    scanf("%d", &cliente.idade);

    printf("Digite o CPF do cliente: ");
    scanf(" %s", cliente.cpf);

    printf("Digite o endereço do cliente: ");
    getchar(); 
    fgets(cliente.endereco, MAX, stdin);

    printf("Digite o telefone do cliente: ");
    fgets(cliente.telefone, MAX, stdin);

    printf("Digite o sexo do cliente (M/F): ");
    scanf(" %c", &cliente.sexo);

    printf("\nDados do cliente:\n");
    printf("Nome: %s", cliente.nome);
    printf("Idade: %d\n", cliente.idade);
    printf("CPF: %s\n", cliente.cpf);
    printf("Endereço: %s", cliente.endereco);
    printf("Telefone: %s", cliente.telefone);
    printf("Sexo: %c\n", cliente.sexo);

}
