#include<stdio.h>
#include<math.h>
#include<locale.h>

//Fa�a um programa que receba o sal�rio base de um funcion�rio, calcule e mostre seu sal�rio a receber, 
//sabendo-se que o funcion�rio tem gratifica��o de R$ 50 e paga imposto de 10% sobre o sal�rio base.

main()
{
setlocale(LC_ALL,"Portuguese");

// Declara��o das Vari�vies

float Salario, NSalario, Imposto;

// Entrada de Dados

printf("Digite seu salario: ");
scanf("%f",&Salario);
  
printf("\n");

// Processamento de Dados

Imposto = Salario*0.10;
NSalario = 50+Salario-Imposto;

// Sa�da de Dados
 
 printf("	Seu salario liquido � de: %.3f ", NSalario);
 
}
