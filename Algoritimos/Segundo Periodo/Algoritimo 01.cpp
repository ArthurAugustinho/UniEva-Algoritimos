#include<stdio.h>
#include<math.h>
#include<locale.h>

//Fa�a um programa que receba dois n�meros e mostre qual deles � o maior.

main()
{
setlocale(LC_ALL,"Portuguese");

float A, B;
// Imiciando a verifica��o com a 

printf("Digite um numero") ;
scanf("%f",&A);

printf("Digite um numero") ;
scanf("%f",&B);

// estrutura condicional

if( A > B){
printf("\n\t Este � o numero maior: %.3f", A ) ;
}
else{
	printf("\n\t Este � o numero maior: %.3f", B);
}

}
// Final de verifica��o
