#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

//Um funcionário de uma empresa recebe, anualmente, aumento salarial. Sabe-se que:
//a) Esse funcionário foi contratado em 2005, com salário inicial de R$ 1.000,00. 
//b) Em 2006, ele recebeu aumento de 1,5% sobre seu salário inicial. 
//c) A partir de 2007 (inclusive), os aumentos salariais sempre corresponderam ao dobro do percentual do ano anterior.
//Faça um programa que determine o salário atual desse funcionário.


int main()
{
	
int i, ano_atual;
float salario, novo_salario, percentual;

printf("Digite o ano atual: ");
scanf("%d",&ano_atual);

salario = 1000;
percentual = 1.5/100;
novo_salario = percentual * salario;
i = 2005;
while (i <= ano_atual)
{
percentual = 2 * percentual;
novo_salario = novo_salario + percentual * novo_salario;
i = i + 1;
}
printf("\nNovo salario = %.2f", novo_salario);
// Parar o programa a espera de um ENTER
printf("\n\n");
system("pause");
}
