#include<stdio.h>
#include<math.h>
#include<locale.h>

//Faça um programa que receba o salário base de um funcionário, calcule e mostre seu salário a receber, 
//sabendo-se que o funcionário tem gratificação de R$ 50 e paga imposto de 10% sobre o salário base.

main()
{
setlocale(LC_ALL,"Portuguese");

// Declaração das Variávies

float Salario, NSalario, Imposto;

// Entrada de Dados

printf("Digite seu salario: ");
scanf("%f",&Salario);
  
printf("\n");

// Processamento de Dados

Imposto = Salario*0.10;
NSalario = 50+Salario-Imposto;

// Saída de Dados
 
 printf("	Seu salario liquido é de: %.3f ", NSalario);
 
}
