#include<stdio.h>
#include<math.h>
#include<locale.h>
#include <string.h>
#define MAX_PACIENTES 100

/*
- "ARP 2": Após criado a estrutura de procedimentos para solicitação das informações dos pacientes, 
a UniSoft, deverá implementar uma estrutura de dados estática para armazenamento temporário das informações 
dos pacientes e apresenta-las ao governo de Goiás afim de validar os dados dos pacientes.

- "Elementos Mínimos": O aluno deverá implementar uma estrutura de dados unidimensional, 
utilizando vetores e/ou matrizes para armazenamento temporário das informações dos pacientes, 
considerando o intervalo de meses de jan/22 e fev/22.

- "Artefatos do Projeto Integrativo": 0 aluno devera alimentar, por referência, a estrutura de dados criada, 
utilizando os procedimentos e/ou funções desenvolvidos no início do projeto.

Aluno: Arthur Augustinho dos Anjos
3° Periodo -- 2210974 */

struct Paciente {
    char nome[30];
    int idade;
    char sexo[10];
    float renSalarial;
    char bairro[30];
    int totalMoradores;
};

void cadastrarPaciente(struct Paciente pacientes[], int indice) {
    printf("\nNome do paciente: ");
    fgets(pacientes[indice].nome, sizeof(pacientes[indice].nome), stdin);
    pacientes[indice].nome[strcspn(pacientes[indice].nome, "\n")] = '\0';

    printf("Idade: ");
    scanf("%d", &pacientes[indice].idade);
    getchar();

    printf("Sexo: ");
    fgets(pacientes[indice].sexo, sizeof(pacientes[indice].sexo), stdin);
    pacientes[indice].sexo[strcspn(pacientes[indice].sexo, "\n")] = '\0';

    printf("Renda salarial: ");
    scanf("%f", &pacientes[indice].renSalarial);
    getchar();

    printf("Bairro de moradia: ");
    fgets(pacientes[indice].bairro, sizeof(pacientes[indice].bairro), stdin);
    pacientes[indice].bairro[strcspn(pacientes[indice].bairro, "\n")] = '\0';

    printf("Quantidade de moradores na residência: ");
    scanf("%d", &pacientes[indice].totalMoradores);
    getchar();
}

void apresentarPacientes(struct Paciente pacientes[], int quantidade) {
    printf("\nDADOS DOS PACIENTES:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("Paciente %d\n", i + 1);
        printf("Nome: %s\n", pacientes[i].nome);
        printf("Idade: %d\n", pacientes[i].idade);
        printf("Sexo: %s\n", pacientes[i].sexo);
        printf("Renda salarial: %.2f\n", pacientes[i].renSalarial);
        printf("Bairro de moradia: %s\n", pacientes[i].bairro);
        printf("Quantidade de moradores na residência: %d\n", pacientes[i].totalMoradores);
        printf("----------------------\n");
    }
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    struct Paciente pacientes[MAX_PACIENTES];
    int quantidade;

    printf("Quantidade de pacientes a cadastrar: ");
    scanf("%d", &quantidade);
    getchar();

    if (quantidade > 0 && quantidade <= MAX_PACIENTES) {
        for (int i = 0; i < quantidade; i++) {
            printf("\n*** Cadastro do paciente %d ***\n", i + 1);
            cadastrarPaciente(pacientes, i);
        }

        apresentarPacientes(pacientes, quantidade);
    } else {
        printf("Quantidade inválida de pacientes.\n");
    }

    return 0;
}

/*  /\ 
   / /
  / /
 / /______
/_Arthur_/
      / /
     / /
    / / 
   /_/
*/
