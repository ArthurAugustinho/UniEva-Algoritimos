#include<stdio.h>
#include<math.h>
#include<locale.h>
#include <string.h>

/* O Governo de Goi�s solicitou a UniSoft que realize uma implementa��o acerca dos casos de dengue 
ocorridos no estado entre os meses de janeiro/22 e fevereiro/22. O governo disponibilizou um banco de 
dados que conta com as seguintes informa��es do paciente: idade, sexo, renda salarial, bairro de moradia e 
quantidade de moradores na resid�ncia. O governo deseja saber se existe correla��o entre os dados de modo a 
tomar a��es para minimiza��o dos casos para o pr�ximo ano. Desenvolva a parte do sistema de controle de pacientes 
da rede p�blica de sa�de que fa�a a solicita��o dos dados do paciente.

Elementos M�nimos: O aluno devera desenvolver uma estrutura de subprogramas (procedimentos e/ou fun��es) 
para realizar as solicita��es de entrada dos dados dos pacientes. 

Artefatos do Projeto Integrativo: O aluno dever� utilizar a estrutura de fun��es para realiza��o de 
quaisquer c�lculos necess�rios e procedimentos para solicita��es de entrada das informa��es dos pacientes.

Aluno: Arthur Augustinho dos Anjos
3� Periodo -- 2210974 */

// Fun��o para ler uma string do usu�rio
void ler_string(char string[], int tamanho) {
    fgets(string, tamanho, stdin);
    string[strcspn(string, "\n")] = '\0';
}

// Fun��o para solicitar as informa��es dos pacientes
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
    
    // Loop para solicitar as informa��es de v�rios pacientes
    while (1) {
        solicitar_informacoes(&idade, &sexo, &renda, bairro, &moradores);
        
        // Realiza as opera��es desejadas com as informa��es do paciente
        
        // Pergunta ao usu�rio se deseja continuar solicitando informa��es
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
