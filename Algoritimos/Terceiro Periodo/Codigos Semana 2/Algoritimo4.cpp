#include<stdio.h>
#include<math.h>
#include<locale.h>

//Fa�a um programa que receba o sal�rio de um funcion�rio, calcule e mostre o novo sal�rio, sabendo-se que este sofreu um aumento de 25%.

main()
{
 setlocale(LC_ALL,"Portuguese");
  // Declara��o das Vari�vies
  
  float Salario, NSalario, ASalario;
  
  // Entrada de Dados
  
printf("Digite seu salario: ");
scanf("%f",&Salario);
  
  printf("\n");
  
  // Processamento de Dados
  
ASalario = Salario/4;
NSalario = Salario+ASalario;
  
  // Sa�da de Dados
  
printf("	O novo salario � de: %.3f ", NSalario);
  
}
