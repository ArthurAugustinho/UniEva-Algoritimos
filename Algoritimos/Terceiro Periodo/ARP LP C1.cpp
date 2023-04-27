#include<stdio.h>
#include<math.h>
#include<locale.h>
#include <string.h>

/* O Governo de Goiás solicitou a UniSoft que realize uma implementação acerca dos casos de dengue 
ocorridos no estado entre os meses de janeiro/22 e fevereiro/22. O governo disponibilizou um banco de 
dados que conta com as seguintes informações do paciente: idade, sexo, renda salarial, bairro de moradia e 
quantidade de moradores na residência. O governo deseja saber se existe correlação entre os dados de modo a 
tomar ações para minimização dos casos para o próximo ano. Desenvolva a parte do sistema de controle de pacientes 
da rede pública de saúde que faça a solicitação dos dados do paciente.

Elementos Mínimos: O aluno devera desenvolver uma estrutura de subprogramas (procedimentos e/ou funções) 
para realizar as solicitações de entrada dos dados dos pacientes. 

Artefatos do Projeto Integrativo: O aluno deverá utilizar a estrutura de funções para realização de 
quaisquer cálculos necessários e procedimentos para solicitações de entrada das informações dos pacientes.

Aluno: Arthur Augustinho dos Anjos
3° Periodo -- 2210974 */

// Função para ler uma string do usuário
void ler_string(char string[], int tamanho) {
    fgets(string, tamanho, stdin);
    string[strcspn(string, "\n")] = '\0';
}

// Função para solicitar as informações dos pacientes
void solicitar_informacoes(int *idade, char *sexo, float *renda, char *bairro, int *moradores) {
    printf("Informe a idade do paciente: ");
    scanf("%d", idade);
    getchar(); 
    
    printf("Informe o sexo do paciente (M/F): ");
    scanf("%c", sexo);
    getchar();
    
    printf("Informe a renda salarial do paciente: ");
    scanf("%f", renda);
    getchar();
    
    printf("Informe o bairro de moradia do paciente: ");
    ler_string(bairro, 100);
    
    printf("Informe a quantidade de moradores na residencia do paciente: ");
    scanf("%d", moradores);
    getchar();
}

int main() {
    int idade, moradores;
    char sexo, bairro[100];
    float renda;
    
    // Loop para solicitar as informações de vários pacientes
    while (1) {
        solicitar_informacoes(&idade, &sexo, &renda, bairro, &moradores);
        
        // Realiza as operações desejadas com as informações do paciente
        
        // Pergunta ao usuário se deseja continuar solicitando informações
        char opcao;
        printf("Deseja continuar? (S/N): ");
        scanf("%c", &opcao);
        getchar();
        if (opcao == 'N' || opcao == 'n') {
            break;
        }
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
