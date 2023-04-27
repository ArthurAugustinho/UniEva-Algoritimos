#include<stdio.h>
#include<math.h>
#include<locale.h>

//Faça um programa que calcule e mostre a área de um círculo. Sabe-se que: Área = p * R2 .

main()
{
setlocale(LC_ALL,"Portuguese");

// Declaração das Variávies

float Area, Raio;

// Entrada de Dados

printf("Digite o valor do raio: ");
scanf("%f",&Raio);

printf("\n");

// Processamento de Dados

Area = 3.14 * (Raio*Raio);

// Saída de Dados
 
 printf("	A área do seu círculo é de: %.3f ", Area);
 
}
