#include<stdio.h>
#include<math.h>
#include<locale.h>

//Faça um programa que calcule e mostre a área de um triângulo. Sabe-se que: Área = (base * altura)/2.

main()
{
setlocale(LC_ALL,"Portuguese");

// Declaração das Variávies

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

// Saída de Dados
 
printf("	A área do seu triangulo é de: %.3f ", Area);
 
}
