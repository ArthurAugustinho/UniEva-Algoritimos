/* Fa�a um programa para verificar se um determinado n�mero inteiro e divis�vel por 3 ou 5, mas
n�o simultaneamente pelos dois.
  */

#include<stdio.h>
#include<math.h>
#include<locale.h>

main()
{ setlocale(LC_ALL,"Portuguese");

int n1;

printf("\n Digite um numero e veja se ele � divis�vel por 3 ou 5: ");
scanf("%i",&n1);

if (n1%3 == 0 ) {
	
	printf("\n o numero � divis�vel por 3 \n");
	if (n1%5 == 0){
		
		printf("\n O numero � divis�vel por 5 \n");
	}
}
else {
	
	if (n1%5 == 0){
		
		printf("\n O numero � divisivel por 5 \n");
		if (n1%3 == 0){
			
			printf("\n O numero � divisivel por 3 \n");
		}
	}
	
	
}


} 
 

