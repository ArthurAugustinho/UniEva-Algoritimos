#include<stdio.h>
#include<math.h>
#include<locale.h>

//Fa�a um programa que calcule e mostre a �rea de um tri�ngulo. Sabe-se que: �rea = (base * altura)/2.

main()
{
setlocale(LC_ALL,"Portuguese");

// Declara��o das Vari�vies

float Altura, Base, Area;

// Entrada de Dados

printf("Digite a altura do triangulo: ");
scanf("%f",&Altura);
  
printf("\n");

printf("Digite o valor da base: ");
scanf("%f",&Base);
  
printf("\n");

// Processamento de Dados

Area = (Base * Altura)/2;

// Sa�da de Dados
 
printf("	A �rea do seu triangulo � de: %.3f ", Area);
 
}
