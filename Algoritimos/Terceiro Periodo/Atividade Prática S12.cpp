#include <stdio.h>
#include<locale.h>

/*
Crie um programa que:
- Receba 0 preso de dez produtos ¢ armazene-os em um vetor;
- Receba a quantidade estocada de cada um desses produtos, em cinco armazéns diferentes, utilizando uma matriz 5 x 10.

O programa deverá calcular e mostrar:
- A quantidade de produtos estocados em cada um dos armazéns;
- A quantidade de cada um dos produtos estocados, em todos os armazéns juntos;
-  Preço do produto que possui maior estoque em um único armazém;
- Menor estoque armazenado;
- O custo de cada armazém.

Aluno: Arthur Augustinho dos Anjos
3° Periodo -- 2210974 */

struct Produto {
float preco;
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    struct Produto produtos[10];
    int estoque[5][10];
    float custoArmazem[5] = {0};
    int totalProdutos = 0;
    int maiorEstoque = 0;
    int menorEstoque = 0;

    printf("Cadastro de Produtos\n");
    for (int i = 0; i < 10; i++) {
        printf("Digite o preco do produto %d: ", i + 1);
        scanf("%f", &produtos[i].preco);
    }

    printf("\nCadastro de Estoque\n");
    for (int i = 0; i < 5; i++) {
        printf("Armazem %d\n", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("Digite a quantidade estocada do produto %d: ", j + 1);
            scanf("%d", &estoque[i][j]);
            custoArmazem[i] += produtos[j].preco * estoque[i][j];
            totalProdutos += estoque[i][j];
            if (estoque[i][j] > estoque[maiorEstoque][j]) {
                maiorEstoque = i;
            }
            if (estoque[i][j] < estoque[menorEstoque][j]) {
                menorEstoque = i;
            }
        }
    }

    printf("\nQuantidade de produtos estocados em cada armazem:\n");
    for (int i = 0; i < 5; i++) {
        printf("Armazem %d: ", i + 1);
        int qtdArmazem = 0;
        for (int j = 0; j < 10; j++) {
            qtdArmazem += estoque[i][j];
        }
        printf("%d\n", qtdArmazem);
    }

    printf("\nQuantidade de cada produto estocado em todos os armazens:\n");
    for (int j = 0; j < 10; j++) {
        int qtdTotalProduto = 0;
        for (int i = 0; i < 5; i++) {
            qtdTotalProduto += estoque[i][j];
        }
        printf("Produto %d: %d\n", j + 1, qtdTotalProduto);
    }

    printf("\nPreco do produto com maior estoque em um unico armazem: %.2f\n", produtos[maiorEstoque].preco);

    printf("\nMenor estoque armazenado: %d\n", estoque[menorEstoque][0]);
    for (int j = 1; j < 10; j++) {
        if (estoque[menorEstoque][j] < estoque[menorEstoque][j - 1]) {
            menorEstoque = j;
        }
    }
    printf("Produto %d: %d\n", menorEstoque + 1, estoque[menorEstoque][menorEstoque]);

    printf("\nCusto de cada armazem:\n");
    for (int i = 0; i < 5; i++) {
        printf("Armazem %d: %.2f\n", i + 1, custoArmazem[i]);
    }

    return 0;
}

