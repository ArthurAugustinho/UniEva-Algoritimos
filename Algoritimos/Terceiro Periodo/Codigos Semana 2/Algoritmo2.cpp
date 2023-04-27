#include<stdio.h>
#include<math.h>
#include<locale.h>

//Faça um programa que receba três notas, calcule e mostre a média aritmética.

main()
{
 setlocale(LC_ALL,"Portuguese");
 
  // Declaração das Variávies
 
 int A, B, C, MA;
 
  // Entrada de Dados
 
printf("Digite uma nota");
scanf("%i",&A);

printf("\n");

printf("Digite uma outra nota");
scanf("%i",&B);

printf("\n");

printf("Digite uma outra nota");
scanf("%i",&C);

printf("\n");

  // Processamento de Dados
 
 MA = (A+B+C)/3;
 
  // Saída de Dados
  
  printf("	A media aritmetica é: %i ",MA);
  
}
