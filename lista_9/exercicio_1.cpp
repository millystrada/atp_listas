#include <stdio.h>
#include <stdlib.h>

void somar_matrizes(int A[3][3], int B[3][3], int C[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main(){
    printf("Este programa utiliza uma função que recebe duas matrizes 3x3 e retorna a soma delas.\n");
    int matriz1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int matriz2[3][3] = {
        {2, 4, 6},
        {8, 10, 12},
        {14, 16, 18}
    };
    int matriz3[3][3]; 

    somar_matrizes(matriz1, matriz2, matriz3); 
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", matriz3[i][j]);
        }
        printf("\n");
    }

    getchar();
    return 0;
}