#include <stdio.h>
#include <stdlib.h>

void transpor(int A[3][3], int At[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            At[i][j] = A[j][i];
        }
    }
}

int main(){
    printf("Este programa utiliza de uma função que calcula a transposta de uma matriz 3x3.\n");
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int matrizt[3][3];

    transpor(matriz, matrizt); 
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", matrizt[i][j]);
        }
        printf("\n");
    }

    getchar();
    return 0;
}