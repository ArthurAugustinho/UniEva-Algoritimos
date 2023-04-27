#include<stdio.h>
#include<math.h>
#include<locale.h>

//Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da semana
//correspondente a este número. Isto e, domingo se 1, segunda-feira se 2, e assim por diante.

main()
{ setlocale(LC_ALL,"Portuguese");

//Declaração de Variaveis 

int semana;

//Dados de Entrada

printf("\n Digite um numero correspondente a um dia da semana de 1 a 7: ");
scanf("%i",&semana);



switch (semana){
	
	case 1:
		printf("\n Domingo");
		break;
	case 2:
		printf("\n Segunda-feira");
		break;
	case 3:
		printf("\n Terça-feira");
		break;
	case 4:
		printf("\n Quarta-feira");
		break;
	case 5:
		printf("\n Quinta-feira");
		break;
	case 6:
		printf("\n Sexta-feira");
		break;
	case 7:
		printf("\n sabado");
		break;
	default:
		printf("\n Opção invalida");
}

} 
 //Verificação Final

