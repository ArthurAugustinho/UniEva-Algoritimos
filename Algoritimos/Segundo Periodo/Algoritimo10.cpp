#include<stdio.h>
#include<math.h>
#include<locale.h>

//Fa�a um programa que mostre ao usu�rio um menu com 4 op��es de opera��es matem�ticas (as
//b�sicas, por exemplo). O usu�rio escolhe uma das op��es e o seu programa ent�o pede dois
//valores num�ricos e realiza a opera��o, mostrando o resultado e saindo. 

main()
{ setlocale(LC_ALL,"Portuguese");

//Declara��o de Variaveis

float n1, n2, soma;
int sinal;

//Dados de Entrada 

printf(" Digite o primeiro n�mero: ");
scanf("%f",&n1);
printf(" Digite o segundo n�mero: ");
scanf("%f",&n2);
printf("\n O QUE VC QUER FAZER?\n \n 1.SOMAR \n 2.SUBTRAIR \n 3.DIVIDIR \n 4.MULTIPLICAR \n\n DIGITE AQUI: ");
scanf("%i",&sinal);

switch (sinal){
	
	case 1:
		soma = (n1+n2);
		printf("O resultado �: %f.3",soma);
		break;
	case 2:
		soma = (n1-n2);
		printf("O resultado �: %f.3",soma);
		break;
	case 3:
		soma = (n1/n2);
		printf("O resultado �: %f.3",soma);
		break;
	case 4:
		soma = (n1*n2);
		printf("O resultado � %f.3",soma);
		break;
	default:
		printf("\n OP��O INV�LIDA \n");	
}

}
//Verifica��o final
