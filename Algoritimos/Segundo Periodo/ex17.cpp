/* Faça um programa que receba três números e mostre-os em ordem crescente. 

  */

#include<stdio.h>
#include<math.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");

int n1, n2, n3, maior, meio, menor;

printf("Digite o primeiro numero: ");
scanf("%i",&n1);
printf("Digite o segundo numero: ");
scanf("%i",&n2);
printf("Digite o tercerio numero: ");
scanf("%i",&n3);

// maior
if (n1 > n2 && n1 > n3){
	maior = (n1); 
	printf("%i",maior);
}
		 		
}			
