#include <stdio.h>
#include <stdlib.h>
#include "exercicio_6.h"
#include "exercicio_7.h"
#include "exercicio_8.h"
#include "exercicio_9.h"

int main() {
    int linhasA, colunasA, linhasB, colunasB;
    int **A, **B, **C;

    printf("MATRIZ A:\n");
    printf("digite o numero de linhas: ");
    scanf("%d", &linhasA);
    printf("digite o numero de colunas: ");
    scanf("%d", &colunasA);

    A = alocaMatriz(linhasA, colunasA);
    if (A == NULL) return 1;
    preencheMatriz(A, linhasA, colunasA);

    printf("\nMATRIZ B:\n");
    printf("digite o numero de linhas: ");
    scanf("%d", &linhasB);
    printf("digite o numero de colunas: ");
    scanf("%d", &colunasB);

    B = alocaMatriz(linhasB, colunasB);
    if (B == NULL) {
        liberaMatriz(A, linhasA);
        return 1;
    }
    preencheMatriz(B, linhasB, colunasB);

    C = multiplicaMatrizes(A, linhasA, colunasA, B, linhasB, colunasB);
    if (C == NULL) {
        printf("\nnao e possivel multiplicar as matrizes. dimensoes incompativeis.\n");
    } else {
        printf("\nresultado da multiplicacao (Matriz C):\n");
        imprimeMatriz(C, linhasA, colunasB);
        liberaMatriz(C, linhasA);
    }

    liberaMatriz(A, linhasA);
    liberaMatriz(B, linhasB);

    return 0;
}