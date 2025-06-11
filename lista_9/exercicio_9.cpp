#include <stdio.h>
#include <stdlib.h>
#include "exercicio_9.h"

void imprimeMatriz(int **matriz, int linhas, int colunas) {
    printf("\nMatriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}