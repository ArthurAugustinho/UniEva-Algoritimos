/* 14. Leia a dist�ncia em Km e a quantidade de litros de gasolina consumidos por um carro em um
percurso, calcule o consumo em Km=l e escreva uma mensagem de acordo com a tabela abaixo:

  */

#include<stdio.h>
#include<math.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");

float km, gasolina;

printf("Quantos KM teve o percurso: ");
scanf("%f",&km);
printf("Quantos litros de gasolina foi consumido: ");
scanf("%f",&gasolina);

if (km/gasolina < 8){
	printf("Venda o carro!");
}
else{
	if ( 8 <= km/gasolina <= 14 ){	
	printf("Econ�mico!");
	}
	else {
		if(km/gasolina > 12){
			printf("Super econ�mico!");
		}
	}
}

 
}			
