#include<stdio.h>
#include<math.h>
#include<locale.h>

//Fa�a um programa que receba o valor de um dep�sito e o valor da taxa de juros, 
//calcule e mostre o valor do rendimento e o valor total depois do rendimento.

main()
{
setlocale(LC_ALL,"Portuguese");

// Declara��o das Vari�vies

float Deposito, Taxa, Rendimento, TaxaPerc, Total;

// Entrada de Dados

printf("Digite o valor do deposito: ");
scanf("%f",&Deposito);
  
printf("\n");

printf("Digite o percentual da taxa de juros: ");
scanf("%f",&Taxa);
  
printf("\n");

// Processamento de Dados

TaxaPerc = Taxa/100;
Rendimento = Deposito*TaxaPerc;
Total = Deposito+Rendimento ;

// Sa�da de Dados
 
 printf("	Seu Rendimento � de: %.3f ", Rendimento);
 printf("	O valor total � de: %.3f ", Total);
 
}
