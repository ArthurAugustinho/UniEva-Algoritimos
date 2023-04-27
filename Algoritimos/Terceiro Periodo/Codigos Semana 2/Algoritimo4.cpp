#include<stdio.h>
#include<math.h>
#include<locale.h>

//Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 25%.

main()
{
 setlocale(LC_ALL,"Portuguese");
  // Declaração das Variávies
  
  float Salario, NSalario, ASalario;
  
  // Entrada de Dados
  
printf("Digite seu salario: ");
scanf("%f",&Salario);
  
  printf("\n");
  
  // Processamento de Dados
  
ASalario = Salario/4;
NSalario = Salario+ASalario;
  
  // Saída de Dados
  
printf("	O novo salario é de: %.3f ", NSalario);
  
}
