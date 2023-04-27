#include<stdio.h>
#include<math.h>
#include<locale.h>

//Faça um programa que receba dois números e mostre qual deles é o maior.

main()
{
setlocale(LC_ALL,"Portuguese");

float A, B;
// Imiciando a verificação com a 

printf("Digite um numero") ;
scanf("%f",&A);

printf("Digite um numero") ;
scanf("%f",&B);

// estrutura condicional

if( A > B){
printf("\n\t Este é o numero maior: %.3f", A ) ;
}
else{
	printf("\n\t Este é o numero maior: %.3f", B);
}

}
// Final de verificação
