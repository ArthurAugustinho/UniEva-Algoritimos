#include<stdio.h>
#include<math.h>
#include<locale.h>
#include <string.h>

/* Faça um programa em C que receba a temperatura média de cada mês do ano e armazene-as em um vetor. 
O programa deve calcular e mostrar a maior e a menor temperatura do ano, junto com o mês em que elas ocorreram 
(o mês deve ser mostrado por extenso: 1 = janeiro; 2 = fevereiro; ...).
Aluno: Arthur Augustinho 
3° Periodo -- 2210974 */

int main() {
    float temp[12];
    char *meses[12] = {"janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
    float menor = 1000, maior = -1000;
    int i, mes_menor, mes_maior;

    for (i = 0; i < 12; i++) {
        printf("Digite a temperatura media de %s: ", meses[i]);
        scanf("%f", &temp[i]);

        if (temp[i] < menor) {
            menor = temp[i];
            mes_menor = i;
        }

        if (temp[i] > maior) {
            maior = temp[i];
            mes_maior = i;
        }
    }

    printf("A menor temperatura do ano foi %.2f graus em %s.\n", menor, meses[mes_menor]);
    printf("A maior temperatura do ano foi %.2f graus em %s.\n", maior, meses[mes_maior]);

    return 0;
}
