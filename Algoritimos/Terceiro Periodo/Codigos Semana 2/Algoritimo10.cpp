#include<stdio.h>
#include<math.h>
#include<locale.h>

//Fa�a um programa que calcule e mostre a �rea de um c�rculo. Sabe-se que: �rea = p * R2 .

main()
{
setlocale(LC_ALL,"Portuguese");

// Declara��o das Vari�vies

float Area, Raio;

// Entrada de Dados

printf("Digite o valor do raio: ");
scanf("%f",&Raio);

printf("\n");

// Processamento de Dados

Area = 3.14 * (Raio*Raio);

// Sa�da de Dados
 
 printf("	A �rea do seu c�rculo � de: %.3f ", Area);
 
}
