#include<stdio.h>
#include<math.h>
#include<locale.h>

//Fa�a um programa que receba quatro n�meros inteiros, calcule e mostre a soma desses n�meros.

main()
{
setlocale(LC_ALL,"Portuguese");

// Declara��o das Vari�vies

float A, B, C, D, Resultado;

// Entrada de Dados

printf("Digite um 1� numero");
scanf("%f",&A);

printf("\n"); 

printf("Digite um 2� numero");
scanf("%f",&B);

printf("\n");

printf("Digite um 3� numero");
scanf("%f",&C);

printf("\n");

printf("Digite um 4� numero");
scanf("%f",&D);
// Processamento de Dados

Resultado = (A+B+C+D);

// Sa�da de Dados

printf("	A soma �: %.3f ",Resultado);
   
}
