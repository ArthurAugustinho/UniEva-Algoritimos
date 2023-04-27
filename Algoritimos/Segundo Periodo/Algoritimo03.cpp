#include<stdio.h>
#include<math.h>
#include<locale.h>

//Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar.

main()
{
setlocale(LC_ALL,"Portuguese");
 
// Declaração de variaveis

int Numero;

// Dados de entrada

printf("Digite um número: ");
scanf("%i",&Numero);

// Estrutura condicional


if(Numero% 2 != 0){
printf("\n\t Este número é impar! %i");
 }
else{
printf("\n\t Este número é par! %i");
}

}
// Final de verificação
