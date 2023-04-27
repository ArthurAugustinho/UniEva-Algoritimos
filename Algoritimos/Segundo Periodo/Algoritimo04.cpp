#include<stdio.h>
#include<math.h>
#include<locale.h>

//Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for
//maior que 20% do salário imprima: “Empréstimo não concedido”, caso contrário imprima: “Empréstimo concedido”

main()
{
setlocale(LC_ALL,"Portuguese");
 
// Declaração de variaveis

float Salario, Prestacao, Valor;

// Dados de entrada

printf("Digite seu salario: ");
scanf("%f",&Salario);

printf("Digite o valor da prestação do emprestimo: ");
scanf("%f",&Prestacao);

// Estrutura condicional

Valor = Salario*0.2;

if( Prestacao > Valor){;
  printf("Empréstimo não concedido!");
}
else{
	printf("Empréstimo concedido");
}

}
// Final de verificação
