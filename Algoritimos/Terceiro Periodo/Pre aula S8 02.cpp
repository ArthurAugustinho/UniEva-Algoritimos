#include<stdio.h>
#include<math.h>
#include<locale.h>
#include <time.h>
#include <stdlib.h>

//Faça um programa que preencha uma matriz 7 x 7 de números inteiros e crie dois vetores com sete posições
//cada um que contenham, respectivamente, o maior elemento de cada uma das linhas e o menor
//elemento de cada uma das colunas. Escreva a matriz e os dois vetores gerados.

// Kevin f  ;)

void linhamai(int matriz[7][7], int vetor1[7]){
    int i, j;
    for(i = 0; i < 7; i++){
        int maiori = matriz[i][0];
        for(j = 1; j < 7; j++) {
            if(matriz[i][j] > maiori) {
                maiori = matriz[i][j];
            }
        }
        vetor1[i] = maiori;
    }   
}

void colunamen(int matriz[7][7], int vetor2[7]){
    int i, j;
     for(j = 0; j < 7; j++) {
            int menorj = matriz[0][j];
            for(i = 1; i < 7; i++) {
                if(matriz[i][j] < menorj) {
                    menorj = matriz[i][j];
                }
            }
            vetor2[j] = menorj;
        }
}

main(){ 
    setlocale (LC_ALL, "Portuguese");

    int vetor1[7], vetor2[7], matriz[7][7], i, j;

    srand(time(NULL));
    for(i = 0; i < 7; i++){    
        for(j = 0; j < 7; j++){
            matriz[i][j] = rand() % 101;
        }
    }

    linhamai(matriz, vetor1);
    colunamen(matriz, vetor2);

    
    printf("Matriz gerada:\n");
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n\tVetor1 (maior valor de cada linha):\n");
    for (i = 0; i < 7; i++) {
        printf("\t%i ", vetor1[i]);
    }
    printf("\n");

    printf("\n\tVetor2 (menor valor de cada coluna):\n");
    for (j = 0; j < 7; j++) {
        printf("\t%i ", vetor2[j]);
    }
    printf("\n");

}
