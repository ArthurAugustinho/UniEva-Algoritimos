#include <stdio.h>
#include<math.h>
#include<locale.h>

//Escreva um programa que leia um n�mero inteiro maior do que zero e devolva, na tela, a soma
//de todos os seus algarismos. Por exemplo, ao n�mero 251 corresponder ao valor 8 (2 + 5 + 1). Se
//o n�mero lido n�o for maior do que zero, o programa terminar a com a mensagem �N�meroinv�lido

main()
{
 setlocale(LC_ALL,"Portuguese");
   
   // Declara��o de variaveis
   
   int num,soma=0;

// Dados de entrada

   printf("Digite um numero: ");

   scanf("%d",&num);

// Estrutura condicional

   if(num>0){
       while(num>0){
       soma=soma+num%10;
       num=num/10;
       }
       
       printf("A soma dos algarismos �: %d",soma);
   }else{
       printf("O numero � invalido");
   }
   return 0;
}
// Final de verifica��o



