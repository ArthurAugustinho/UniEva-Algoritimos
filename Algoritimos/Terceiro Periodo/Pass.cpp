#include <stdio.h>
#include <string.h>
# include <locale.h>

void minhasConsultas(int numerosConsulta, int idade, char cpf, char primeiroNome[50], char segundoNome[50], char lugarConsulta[50]){
    printf("%s %s\n", primeiroNome, segundoNome);
    printf("%i\n",idade);
    printf("%c\n", cpf);
    printf("%s\n",lugarConsulta);
   
}

int main(){
	setlocale(LC_ALL, "Portuguese");
    int escolha, tipo_agendamento, idade;
    char primeiroNome[50], segundoNome[50], lugarConsulta[50], sair, opcao, cpf;

    sair = 'n';
    while(sair == 'n'){ 
        printf("\n** Bem-vindo(a) ao Pass+. **\n");
        printf("\nSeu app para gerência de senhas e consultas\n");
        printf("Por favor, escolha uma das opções abaixo com o número correspondente a ação que deseja:\n");
        printf("1 - Agendar consulta.\n");
        printf("2 - Verificar minhas consultas.\n");
        printf("Opção: ");
        scanf("%d", &escolha);

        switch(escolha) {
            case 1:
                printf("\nVocê escolheu a opção 1 - Agendar consulta.\n");
                printf("Qual tipo de agendamento quer fazer: \n");
                printf("1 - Emergencial\n2 - Exame de rotina\n3 - Consulta\n4 - Retorno\n5 - Vacinação\n6 - Retirada de senha presencial.\n");
                printf("Opção: ");
                scanf("%d",&tipo_agendamento);

                printf("Seu primeiro nome: ");
                scanf("%s", primeiroNome);
                printf("Seu segundo nome: ");
                scanf("%s", segundoNome);
                printf("Idade: ");
                scanf("%d", &idade); 
                printf("CPF: ");
                scanf("%s", &cpf); 
                printf("Nome da clínica: ");
                scanf("%s", lugarConsulta);

                printf("\nAgendamento realizado com sucesso!\n");

                opcao = ' ';
                while (opcao != 's' && opcao != 'n') {
                    printf("Quer ver seus agendamentos [s/n]?");
                    scanf(" %c",&opcao);
                }
                if (opcao == 'n') {
                    sair = 's';
                }
                else{
                minhasConsultas(0, idade, cpf, primeiroNome, segundoNome, lugarConsulta);
                	
                while (opcao != 's' && opcao != 'n') {
                    printf("Quer sair [s/n]?");
                    scanf(" %c", &opcao);
                }
                
                if (opcao == 'n') {
                    sair = 's';
                }
                
				}
                break;

            case 2:
                printf("\nVocê escolheu a opção 2 - Verificar minhas consultas.\n");
                minhasConsultas(0, idade, cpf, primeiroNome, segundoNome, lugarConsulta);
	
                opcao = ' ';
                while (opcao != 's' && opcao != 'n') {
                    printf("Quer sair [s/n]?");
                    scanf(" %c", &opcao);
                }
                if (opcao == 'n') {
                    sair = 's';
                }
                break;

            default:
                printf("\nOpção inválida, tente novamente.\n");
                break;
        }
    }

    return 0;
}

