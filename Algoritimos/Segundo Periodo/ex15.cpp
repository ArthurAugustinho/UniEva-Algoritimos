/* Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das
seguintes medias de acordo com um valor numérico digitado pelo usuário: 

  */

#include<stdio.h>
#include<math.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");

int x, y, z, geo, po, ha, ar, media;

printf("Digite o primeiro valor: ");
scanf("%i",&x);
printf("Digite o segundo valor: ");
scanf("%i",&y);
printf("Digite o terceiro valor: ");
scanf("%i",&z);



if (x > 0 && y > 0 && z > 0){
	printf("Qual media vc quer calcular: \n 1. Geometrica \n 2. Ponderada \n 3. Harmonica \n 4. Aritmética \n ");
	scanf("%i",&media);
	switch(media){
		case 1:
			geo = cbrt(x*y*z);
			printf("%i",geo);
		case 2:
			po = ((x+2*y+3*z)/6);
			printf("%i",po);
		case 3:
			ha = (1/(1/x+1/y+1/z));
			printf("%i",ha);
		case 4:
			ar = ((x+y+z)/3);
			printf("\n %i",ar);		
				
	}
}
}			
