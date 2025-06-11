#include <stdio.h>
#include <stdlib.h>
#include "exercicio_7.h"

void liberaMatriz(int** matriz, int linhas){
    for(int i = 0; i < linhas; i++){
        free(matriz[i]);
    }
    free(matriz);
}