#include<stdio.h>
#include<math.h>
#include<locale.h>

//A nota final de um estudante e calculada a partir de tr�s notas atribu�das entre o intervalo de 0
//at� 10, respectivamente, a um trabalho de laborat�rio, a uma avalia��o semestral e a um exame
//final. A m�dia das tr�s notas mencionadas anteriormente obedece aos pesos: Trabalho de
//Laborat�rio: 2; Avalia��o Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na tela
//se o aluno este reprovado (media entre 0 e 2,9), de recupera��o (entre 3 e 4,9) ou se foi aprovado.
//Fa�a todas as verifica��es necess�rias.

main()
{ setlocale(LC_ALL,"Portuguese");

//Declara��o de Variaveis

float n1, n2, n3, mdp; 

//Dados de Entrada

printf("\n Digite a nota do trabalho de laboratorio no intervalo de 0 at� 10: ");
scanf("%f",&n1);
printf("\n Digite a nota da avalia��o semestral no intervalo de 0 at� 10: ");
scanf("%f",&n2);
printf("\n Digite a nota do exame final no intervalo de 0 at� 10: ");
scanf("%f",&n3);

//Calculo Logico

mdp = (n1*2+n2*3+n3*5)/n1+n2+n3;

//Estrutura Condicional

if( mdp <= 2.9)  {
	
	printf("\n Aluno reprovado");
	printf(" Sua nota � %f",mdp);

} 

else {
	if( mdp <= 5)  {
	
	printf("\n Aluno esta de recupera�ao");
	printf(" Sua nota � %f",mdp);	
	}
	else {
		printf("\n Aluno aprovado");
		printf(" Sua nota �:  %f",mdp);
	}
 }
} 
 
//Verifica��o Final
