#include<stdio.h>
#include<math.h>
#include<locale.h>

//Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber, 
//sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% também sobre o salário base.

main()
{
setlocale(LC_ALL,"Portuguese");

// Declaração das Variávies

float Salario, NSalario, Gratificacao, Imposto;

// Entrada de Dados

printf("Digite seu salario: ");
scanf("%f",&Salario);
  
printf("\n");

// Processamento de Dados

Gratificacao = Salario * 0.05;
Imposto = Salario * 0.07;
NSalario = Salario - Imposto + Gratificacao;

// Saída de Dados
 
 printf("	Seu salario liquido é de: %.3f ", NSalario);
 
}
