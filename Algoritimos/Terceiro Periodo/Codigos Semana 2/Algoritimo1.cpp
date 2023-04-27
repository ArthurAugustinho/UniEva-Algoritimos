#include<stdio.h>
#include<math.h>
#include<locale.h>

//Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números.

main()
{
setlocale(LC_ALL,"Portuguese");

// Declaração das Variávies

float A, B, C, D, Resultado;

// Entrada de Dados

printf("Digite um 1° numero");
scanf("%f",&A);

printf("\n"); 

printf("Digite um 2° numero");
scanf("%f",&B);

printf("\n");

printf("Digite um 3° numero");
scanf("%f",&C);

printf("\n");

printf("Digite um 4° numero");
scanf("%f",&D);
// Processamento de Dados

Resultado = (A+B+C+D);

// Saída de Dados

printf("	A soma é: %.3f ",Resultado);
   
}
