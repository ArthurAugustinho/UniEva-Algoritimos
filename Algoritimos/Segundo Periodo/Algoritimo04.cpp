#include<stdio.h>
#include<math.h>
#include<locale.h>

//Leia o sal�rio de um trabalhador e o valor da presta��o de um empr�stimo. Se a presta��o for
//maior que 20% do sal�rio imprima: �Empr�stimo n�o concedido�, caso contr�rio imprima: �Empr�stimo concedido�

main()
{
setlocale(LC_ALL,"Portuguese");
 
// Declara��o de variaveis

float Salario, Prestacao, Valor;

// Dados de entrada

printf("Digite seu salario: ");
scanf("%f",&Salario);

printf("Digite o valor da presta��o do emprestimo: ");
scanf("%f",&Prestacao);

// Estrutura condicional

Valor = Salario*0.2;

if( Prestacao > Valor){;
  printf("Empr�stimo n�o concedido!");
}
else{
	printf("Empr�stimo concedido");
}

}
// Final de verifica��o
