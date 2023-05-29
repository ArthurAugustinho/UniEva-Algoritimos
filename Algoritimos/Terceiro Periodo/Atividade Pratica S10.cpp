#include <stdio.h>
#include <locale.h>
#define SIZE 5

/*Faça um programa que utilize uma matriz 5 X 5 a qual aceite três tipos de valores: múltiplos de 5, 
múltiplos de 11 e múltiplos de 13. Devem ser lidos apenas valores maiores que zero. Após a leitura, 
os números devem ser distribuídos da seguinte maneira:

- Os múltiplos de 5 devem ocupar a diagonal principal;
- Os múltiplos de 11 devem ficar acima da diagonal principal;
- Os múltiplos de 13 devem ficar abaixo da diagonal principal.

Como alguns números podem ser múltiplos de 5, de 11 e também de 13 (por exemplo, 55 é múltiplo de 5 e de 11; 
65 é múltiplo de 5 e de 13), deve-se, primeiro, verificar se o número digitado é múltiplo de 5. Caso não seja, 
deve-se verificar se é múltiplo de 11. Caso não seja, deve-se verificar se é múltiplo de 13. Caso não seja, 
o programa deverá mostrar a mensagem Número invalido (por exemplo, o número 55 deverá ser considerado múltiplo de 5, 
pois esta é a comparação que será feita primeiro).

Segue-se um exemplo.

  5 | 44 | 11 |  33  | 55
26 | 15 | 77 |  99  | 88
39 | 13 | 10 | 121 | 22
52 | 78 | 65 |  40  | 132
91 |117|104| 143 | 25

Esse programa deverá observar as seguintes situações:
- Quando o usuário digitar um múltiplo de 5 e não houver mais espago na diagonal principal, deverá mostrar a mensagem Diagonal totalmente preenchida;
- Quando o usuário digitar um múltiplo de 11 e no houver mais espago disponível na matriz, deverá mostrar a mensagem não existe espago acima da diagonal principal;
- Quando o usuário digitar um múltiplo de 13 e no houver mais espago disponível na matriz, deverá mostrar a mensagem não existe espago abaixo da diagonal principal;
- Quando a matriz estiver totalmente preenchida, deverá mostrar todos os elementos da matriz, junto com suas posições (linha e coluna).

Aluno: Arthur Augustinho dos Anjos
3° Periodo -- 2210974 */

void printMatrix(int matrix[][SIZE]) {
    printf("Matriz:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int matrix[SIZE][SIZE] = {0};
    int countMultiples5 = 0, countMultiples11 = 0, countMultiples13 = 0;
    int totalCount = 0;

    printf("Este programa distribui os números em uma matriz 5x5 de acordo com as seguintes regras:\n");
    printf("- Múltiplos de 5 ocupam a diagonal principal;\n");
    printf("- Múltiplos de 11 ficam acima da diagonal principal;\n");
    printf("- Múltiplos de 13 ficam abaixo da diagonal principal;\n");
    printf("Digite valores maiores que zero para preencher a matriz.\n");

    while (totalCount < SIZE * SIZE) {
        int num;
        printf("Digite um número (ou zero para sair): ");
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        if (num % 5 == 0 && countMultiples5 < SIZE) {
            matrix[countMultiples5][countMultiples5] = num;
            countMultiples5++;
            totalCount++;
        } else if (num % 11 == 0 && countMultiples11 < SIZE * (SIZE - 1) / 2) {
            int row = countMultiples11 / SIZE;
            int col = countMultiples11 % SIZE;
            matrix[row][col] = num;
            countMultiples11++;
            totalCount++;
        } else if (num % 13 == 0 && countMultiples13 < SIZE * (SIZE - 1) / 2) {
            int row = SIZE - 1 - countMultiples13 / SIZE;
            int col = countMultiples13 % SIZE;
            matrix[row][col] = num;
            countMultiples13++;
            totalCount++;
        } else {
            printf("Número inválido!\n");
        }

        if (totalCount == SIZE * SIZE) {
            printf("A matriz está totalmente preenchida!\n");
            printMatrix(matrix);
        } else if (countMultiples5 == SIZE) {
            printf("Diagonal totalmente preenchida!\n");
        } else if (countMultiples11 == SIZE * (SIZE - 1) / 2) {
            printf("Não existe espaço acima da diagonal principal!\n");
        } else if (countMultiples13 == SIZE * (SIZE - 1) / 2) {
            printf("Não existe espaço abaixo da diagonal principal!\n");
        }
    }

    return 0;
}

