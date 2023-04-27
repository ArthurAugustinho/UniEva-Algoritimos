#include<stdio.h>
#include<math.h>
#include<locale.h>

//Faça um programa que mostre ao usuário um menu com 4 opções de operações matemáticas (as
//básicas, por exemplo). O usuário escolhe uma das opções e o seu programa então pede dois
//valores numéricos e realiza a operação, mostrando o resultado e saindo. 

main()
{ setlocale(LC_ALL,"Portuguese");

//Declaração de Variaveis

float n1, n2, soma;
int sinal;

//Dados de Entrada 

printf(" Digite o primeiro número: ");
scanf("%f",&n1);
printf(" Digite o segundo número: ");
scanf("%f",&n2);
printf("\n O QUE VC QUER FAZER?\n \n 1.SOMAR \n 2.SUBTRAIR \n 3.DIVIDIR \n 4.MULTIPLICAR \n\n DIGITE AQUI: ");
scanf("%i",&sinal);

switch (sinal){
	
	case 1:
		soma = (n1+n2);
		printf("O resultado é: %f.3",soma);
		break;
	case 2:
		soma = (n1-n2);
		printf("O resultado é: %f.3",soma);
		break;
	case 3:
		soma = (n1/n2);
		printf("O resultado é: %f.3",soma);
		break;
	case 4:
		soma = (n1*n2);
		printf("O resultado é %f.3",soma);
		break;
	default:
		printf("\n OPÇÃO INVÁLIDA \n");	
}

}
//Verificação final
