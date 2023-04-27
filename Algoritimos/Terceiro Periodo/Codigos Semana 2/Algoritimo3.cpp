#include<stdio.h>
#include<math.h>
#include<locale.h>

//Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada

main()
{
 setlocale(LC_ALL,"Portuguese");
  // Declaração das Variávies
  
float A, B, C, PA, PB, PC, MP;
  
  // Entrada de Dados
  
printf("Digite uma nota ");
scanf("%f",&A);

printf("\n");

printf("Digite o peso desta nota ");
scanf("%f",&PA);

printf("\n");

printf("Digite outra nota ");
scanf("%f",&B);

printf("\n");

printf("Digite o peso desta nota ");
scanf("%f",&PB);

printf("\n");

printf("Digite outra nota");
scanf("%f",&C);

printf("\n");

printf("Digite o peso desta nota ");
scanf("%f",&PC);

printf("\n");
  
  // Processamento de Dados
  
  MP = (A*PA+B*PB+C*PC)/(PA+PB+PC);
  
  // Saída de Dados

printf("	A Media Ponderada é: %.3f ",MP);

}
