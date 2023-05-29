#include <stdio.h>
#include <locale.h>
#define SIZE 5

/*Fa�a um programa que utilize uma matriz 5 X 5 a qual aceite tr�s tipos de valores: m�ltiplos de 5, 
m�ltiplos de 11 e m�ltiplos de 13. Devem ser lidos apenas valores maiores que zero. Ap�s a leitura, 
os n�meros devem ser distribu�dos da seguinte maneira:

- Os m�ltiplos de 5 devem ocupar a diagonal principal;
- Os m�ltiplos de 11 devem ficar acima da diagonal principal;
- Os m�ltiplos de 13 devem ficar abaixo da diagonal principal.

Como alguns n�meros podem ser m�ltiplos de 5, de 11 e tamb�m de 13 (por exemplo, 55 � m�ltiplo de 5 e de 11; 
65 � m�ltiplo de 5 e de 13), deve-se, primeiro, verificar se o n�mero digitado � m�ltiplo de 5. Caso n�o seja, 
deve-se verificar se � m�ltiplo de 11. Caso n�o seja, deve-se verificar se � m�ltiplo de 13. Caso n�o seja, 
o programa dever� mostrar a mensagem N�mero invalido (por exemplo, o n�mero 55 dever� ser considerado m�ltiplo de 5, 
pois esta � a compara��o que ser� feita primeiro).

Segue-se um exemplo.

  5 | 44 | 11 |  33  | 55
26 | 15 | 77 |  99  | 88
39 | 13 | 10 | 121 | 22
52 | 78 | 65 |  40  | 132
91 |117|104| 143 | 25

Esse programa dever� observar as seguintes situa��es:
- Quando o usu�rio digitar um m�ltiplo de 5 e n�o houver mais espago na diagonal principal, dever� mostrar a mensagem Diagonal totalmente preenchida;
- Quando o usu�rio digitar um m�ltiplo de 11 e no houver mais espago dispon�vel na matriz, dever� mostrar a mensagem n�o existe espago acima da diagonal principal;
- Quando o usu�rio digitar um m�ltiplo de 13 e no houver mais espago dispon�vel na matriz, dever� mostrar a mensagem n�o existe espago abaixo da diagonal principal;
- Quando a matriz estiver totalmente preenchida, dever� mostrar todos os elementos da matriz, junto com suas posi��es (linha e coluna).

Aluno: Arthur Augustinho dos Anjos
3� Periodo -- 2210974 */

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

    printf("Este programa distribui os n�meros em uma matriz 5x5 de acordo com as seguintes regras:\n");
    printf("- M�ltiplos de 5 ocupam a diagonal principal;\n");
    printf("- M�ltiplos de 11 ficam acima da diagonal principal;\n");
    printf("- M�ltiplos de 13 ficam abaixo da diagonal principal;\n");
    printf("Digite valores maiores que zero para preencher a matriz.\n");

    while (totalCount < SIZE * SIZE) {
        int num;
        printf("Digite um n�mero (ou zero para sair): ");
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
            printf("N�mero inv�lido!\n");
        }

        if (totalCount == SIZE * SIZE) {
            printf("A matriz est� totalmente preenchida!\n");
            printMatrix(matrix);
        } else if (countMultiples5 == SIZE) {
            printf("Diagonal totalmente preenchida!\n");
        } else if (countMultiples11 == SIZE * (SIZE - 1) / 2) {
            printf("N�o existe espa�o acima da diagonal principal!\n");
        } else if (countMultiples13 == SIZE * (SIZE - 1) / 2) {
            printf("N�o existe espa�o abaixo da diagonal principal!\n");
        }
    }

    return 0;
}

