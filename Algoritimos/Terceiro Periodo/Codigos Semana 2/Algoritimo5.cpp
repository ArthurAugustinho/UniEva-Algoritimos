#include<stdio.h>
#include<math.h>
#include<locale.h>

//Fa�a um programa que receba o sal�rio de um funcion�rio e o percentual de aumento, 
//calcule e mostre o valor do aumento e o novo sal�rio.

main()
{
 setlocale(LC_ALL,"Portuguese");

// Declara��o das Vari�vies
  
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
  
// Sa�da de Dados
  
  printf("	O valor do seu aumento � de: %.3f ", ValPer);
  printf(" \n");
  printf("	O novo salario � de: %.3f ", SM);
}
