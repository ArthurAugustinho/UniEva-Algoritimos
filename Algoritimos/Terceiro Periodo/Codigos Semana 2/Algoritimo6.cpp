#include<stdio.h>
#include<math.h>
#include<locale.h>

//Fa�a um programa que receba o sal�rio base de um funcion�rio, calcule e mostre o sal�rio a receber, 
//sabendo-se que o funcion�rio tem gratifica��o de 5% sobre o sal�rio base e paga imposto de 7% tamb�m sobre o sal�rio base.

main()
{
setlocale(LC_ALL,"Portuguese");

// Declara��o das Vari�vies

float Salario, NSalario, Gratificacao, Imposto;

// Entrada de Dados

printf("Digite seu salario: ");
scanf("%f",&Salario);
  
printf("\n");

// Processamento de Dados

Gratificacao = Salario * 0.05;
Imposto = Salario * 0.07;
NSalario = Salario - Imposto + Gratificacao;

// Sa�da de Dados
 
 printf("	Seu salario liquido � de: %.3f ", NSalario);
 
}
