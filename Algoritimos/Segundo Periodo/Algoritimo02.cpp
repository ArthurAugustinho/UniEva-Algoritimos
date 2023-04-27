#include<stdio.h>
#include<math.h>
#include<locale.h>

//Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada do 
//número. Se o número for negativo, mostre uma mensagem dizendo que o número e inválido. 

main()
{
setlocale(LC_ALL,"Portuguese");

//Declaração de variaveis

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
	printf("\n\t Este número e inválido! %.3f");
}

}
