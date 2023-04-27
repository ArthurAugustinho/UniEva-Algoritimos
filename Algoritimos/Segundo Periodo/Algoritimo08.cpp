#include<stdio.h>
#include<math.h>
#include<locale.h>

//A nota final de um estudante e calculada a partir de três notas atribuídas entre o intervalo de 0
//até 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame
//final. A média das três notas mencionadas anteriormente obedece aos pesos: Trabalho de
//Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na tela
//se o aluno este reprovado (media entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi aprovado.
//Faça todas as verificações necessárias.

main()
{ setlocale(LC_ALL,"Portuguese");

//Declaração de Variaveis

float n1, n2, n3, mdp; 

//Dados de Entrada

printf("\n Digite a nota do trabalho de laboratorio no intervalo de 0 até 10: ");
scanf("%f",&n1);
printf("\n Digite a nota da avaliação semestral no intervalo de 0 até 10: ");
scanf("%f",&n2);
printf("\n Digite a nota do exame final no intervalo de 0 até 10: ");
scanf("%f",&n3);

//Calculo Logico

mdp = (n1*2+n2*3+n3*5)/n1+n2+n3;

//Estrutura Condicional

if( mdp <= 2.9)  {
	
	printf("\n Aluno reprovado");
	printf(" Sua nota é %f",mdp);

} 

else {
	if( mdp <= 5)  {
	
	printf("\n Aluno esta de recuperaçao");
	printf(" Sua nota é %f",mdp);	
	}
	else {
		printf("\n Aluno aprovado");
		printf(" Sua nota é:  %f",mdp);
	}
 }
} 
 
//Verificação Final
