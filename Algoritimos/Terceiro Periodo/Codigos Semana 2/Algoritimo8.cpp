#include<stdio.h>
#include<math.h>
#include<locale.h>

//Faça um programa que receba o valor de um depósito e o valor da taxa de juros, 
//calcule e mostre o valor do rendimento e o valor total depois do rendimento.

main()
{
setlocale(LC_ALL,"Portuguese");

// Declaração das Variávies

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

// Saída de Dados
 
 printf("	Seu Rendimento é de: %.3f ", Rendimento);
 printf("	O valor total é de: %.3f ", Total);
 
}
