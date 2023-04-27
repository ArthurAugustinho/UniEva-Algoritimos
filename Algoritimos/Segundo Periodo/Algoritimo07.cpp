#include<stdio.h>
#include<math.h>
#include<locale.h>

//Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e a segunda
//prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do aluno e indicar se o aluno
//foi aprovado ou reprovado. A nota para aprovação deve ser igual ou superior a 60 pontos.

main()
{ setlocale(LC_ALL,"Portuguese");

//Declaração de Variaveis 

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

//Final de Verificação 
