#include<stdio.h>
#include<math.h>
#include<locale.h>

//Fa�a um algoritmo que calcule a m�dia ponderada das notas de 3 provas. A primeira e a segunda
//prova t�m peso 1 e a terceira tem peso 2. Ao final, mostrar a m�dia do aluno e indicar se o aluno
//foi aprovado ou reprovado. A nota para aprova��o deve ser igual ou superior a 60 pontos.

main()
{ setlocale(LC_ALL,"Portuguese");

//Declara��o de Variaveis 

float n1, n2, n3, mdp; 

//Dados de Entrada

printf("\n Digite a primeira nota: ");
scanf("%f",&n1);
printf("\n Digite a segunda nota: ");
scanf("%f",&n2);
printf("\n Digite a terceira nota: ");
scanf("%f",&n3);

//Calculo Logico

mdp = (n1*1+n2*1+n3*2)/n1+n2+n3;

// Estrutura condicional

if(mdp >= 60) {
	
	printf("\n Aluno aprovado");
} 

else
 {	printf("\n Aluno reprovado");
 
}
}

//Final de Verifica��o 
