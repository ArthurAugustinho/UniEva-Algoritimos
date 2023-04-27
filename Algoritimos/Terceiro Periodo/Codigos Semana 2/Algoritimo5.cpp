#include<stdio.h>
#include<math.h>
#include<locale.h>

//Faça um programa que receba o salário de um funcionário e o percentual de aumento, 
//calcule e mostre o valor do aumento e o novo salário.

main()
{
 setlocale(LC_ALL,"Portuguese");

// Declaração das Variávies
  
  float SL, Perc, SM, ValPer, Porcentagem;
  
// Entrada de Dados
  
printf("Digite um Salario: ");
scanf("%f",&SL);

printf("\n");

printf("Digite um percentual de aumento: ");
scanf("%f",&Perc);

printf("\n");
 
// Processamento de Dados
  
  Porcentagem = Perc/100;
  ValPer = Porcentagem*SL;
  SM = SL+ValPer;
  
// Saída de Dados
  
  printf("	O valor do seu aumento é de: %.3f ", ValPer);
  printf(" \n");
  printf("	O novo salario é de: %.3f ", SM);
}
