/* Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se aposentar.
As condições para aposentadoria são:
• Ter pelo menos 65 anos,
• Ou ter trabalhado pelo menos 30 anos,
• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
  */

#include<stdio.h>
#include<math.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");

int idade;
float ts;

printf("Qual a idade do trabalhador: ");
scanf("%i",&idade);
printf("Qual o tempo de serviço do trabalhador: ");
scanf("%f",&ts);

if ( idade >= 65){
	if (ts >= 30){
		printf("\n O trabalhador pode aposentar.");
	}
}
else {
	if (idade >= 60){
		if (ts >= 25){
			printf("\nO trabalhador pode aposentar.");
		}
	}
	else {
		printf("\nO trabalhador não pode aposentar.");
	}
}


 
}			
