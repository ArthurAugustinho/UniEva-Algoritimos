/* Faça um programa para verificar se um determinado número inteiro e divisível por 3 ou 5, mas
não simultaneamente pelos dois.
  */

#include<stdio.h>
#include<math.h>
#include<locale.h>

main()
{ setlocale(LC_ALL,"Portuguese");

int n1;

printf("\n Digite um numero e veja se ele é divisível por 3 ou 5: ");
scanf("%i",&n1);

if (n1%3 == 0 ) {
	
	printf("\n o numero é divisível por 3 \n");
	if (n1%5 == 0){
		
		printf("\n O numero é divisível por 5 \n");
	}
}
else {
	
	if (n1%5 == 0){
		
		printf("\n O numero é divisivel por 5 \n");
		if (n1%3 == 0){
			
			printf("\n O numero é divisivel por 3 \n");
		}
	}
	
	
}


} 
 

