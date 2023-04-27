/* Dados tr�s valores A B, C, verificar se eles podem ser valores dos lados de um triangulo e, se
forem, se � um triangulo escaleno, equil�tero ou is�sceles, considerando os seguintes conceitos:
� O comprimento de cada lado de um triangulo � menor do que a soma dos outros dois
lados.
� Chama-se equil�tero o triangulo que tem tr�s lados iguais.
� Denominam-se is�sceles o triangulo que tem o comprimento de dois lados iguais.
� Recebe o nome de escaleno o triangulo que tem os tr�s lados diferentes.
  */

#include<stdio.h>
#include<math.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");

float a, b, c;

printf("Digite o comprimento de a: ");
scanf("%f",&a);
printf("Digite o comprimento de B: ");
scanf("%f",&b);
printf("Digite o comprimento de c: ");
scanf("%f",&c);

if ( a > 0 && b > 0 && c > 0){
	
	printf("\nEssas medidas formam um triangulo: \n");
	if (a + b > c && a + c > b && b + c > a){
		if (a == b && a == c){
			printf("Equilatero \n");
		}
		else{
			if (a == b || a == c || b == a || b == c || c == a || c == b ){
				printf("is�sceles \n");
				
			}
			
		}
}
else {
	if (a != b && a != c){
		printf("Escaleno \n");
	}
}		
		
	}


}			
