#include<stdio.h>
#include<math.h>
#include<locale.h>

//Fa�a um programa que receba um n�mero inteiro e verifique se este n�mero � par ou �mpar.

main()
{
setlocale(LC_ALL,"Portuguese");
 
// Declara��o de variaveis

int Numero;

// Dados de entrada

printf("Digite um n�mero: ");
scanf("%i",&Numero);

// Estrutura condicional


if(Numero% 2 != 0){
printf("\n\t Este n�mero � impar! %i");
 }
else{
printf("\n\t Este n�mero � par! %i");
}

}
// Final de verifica��o
