#include<stdio.h>
#include<math.h>
#include<locale.h>

/*Fa�a um programa que preencha dois vetores com cinco elementos num�ricos cada e, depois, ordene-
-os de maneira crescente. Dever� ser gerado um terceiro vetor com dez posi��es, composto pela jun��o
dos elementos dos vetores anteriores, tamb�m ordenado de maneira crescente. Para preencher e ordenar os vetores  utilize fun��es.

Aluno: Arthur Augustinho dos Anjos
3� Periodo -- 2210974 */

void ordenar(int vetor1[], int vetor2[]){
	int i, j;
	int vetorfinal[10], copia;
	for(i = 0; i < 5; i++){
	printf("\t Vetor 1 = [%i] \n", vetor1[i]);	
	vetorfinal[i] = vetor1[i];
}
printf("\n");
for(i = 0; i < 5; i++){	
	printf("\t Vetor 2 = [%i] \n", vetor2[i]);
	vetorfinal[i+5] = vetor2[i];
}
printf("\n");
for(j = 0; j <= 10; j++){
	for(i = 0; i < 9; i++){
 		if (vetorfinal[i] > vetorfinal[i+1]){
 			copia = vetorfinal[i];
 			vetorfinal[i] = vetorfinal[i+1];
 			vetorfinal[i+1] = copia;			
 } 
}
}
printf("\n Os valores em ordem s�o: ");
for(i = 0; i < 10; i++){
	printf("\t [%i] ", vetorfinal[i]);
}

}

main()
{ 
setlocale (LC_ALL, "Portuguese");
// Variav�is
int vetor1[5], vetor2[5], vetorfinal[10], copia;
int i, j;
// Ent de dados
for(i = 0; i < 5; i++){
	printf("\t Preencha o primeiro vetor com 5 numeros, indice = [%i] : ", i);
	scanf("%i",&vetor1[i]);	
}

printf("\n");

for(i = 0; i < 5; i++){
	printf("\t Preencha o segundo vetor com 5 numeros, indice = [%i] : ", i);
	scanf("%i",&vetor2[i]);	
}

printf("\n");

ordenar(vetor1, vetor2);

}
