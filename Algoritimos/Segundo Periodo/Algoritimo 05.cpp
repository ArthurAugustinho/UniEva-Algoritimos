#include<stdio.h>
#include<math.h>
#include<locale.h>

//Fa�a um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal,
//utilizando as seguintes f�rmulas (onde h corresponde � altura):
//� Homens: (72.7 * h) � 58
//� Mulheres: (62.1 * h) � 44.7

main()
{
setlocale(LC_ALL,"Portuguese");
 
// Declara��o de variaveis

char s;
float h, peso;

// Dados de entrada

printf("Qual sua altura? ");
scanf("%f",&h);

printf("Digite 'm' para masculino e 'f' para feminino.");
scanf("%f",&s);

// Estrutura condicional

if (s == 'm' || s == 'M'){
     peso = (72.7 * h- 58);
	 printf("\n\t Est� � seu peso ideal! %.3fkg", peso);

}
else (s == 'f' || s == 'F');{
peso = (62.1 * h- 44.7);
printf("\n\t Est� � seu peso ideal! %.3fkg", peso);
}

}
// Final de verifica��o
