#include<stdio.h>
#include<math.h>
#include<locale.h>

//Fa�a um programa que receba tr�s notas, calcule e mostre a m�dia aritm�tica.

main()
{
 setlocale(LC_ALL,"Portuguese");
 
  // Declara��o das Vari�vies
 
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
 
  // Sa�da de Dados
  
  printf("	A media aritmetica �: %i ",MA);
  
}
