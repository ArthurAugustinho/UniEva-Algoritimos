#include<stdio.h>
#include<math.h>
#include<locale.h>

//Leia um n�mero fornecido pelo usu�rio. Se esse n�mero for positivo, calcule a raiz quadrada do 
//n�mero. Se o n�mero for negativo, mostre uma mensagem dizendo que o n�mero e inv�lido. 

main()
{
setlocale(LC_ALL,"Portuguese");

//Declara��o de variaveis

float A, R;

// Dados de entrada

printf("Digite um numero") ;
scanf("%f",&A);

// estrutura condicional

R = sqrt(A);

if( A > 0){
printf("\n\t A raiz e: %.3f", R);
}
else{
	printf("\n\t Este n�mero e inv�lido! %.3f");
}

}
