#include <stdlib.h>
#include <stdio.h>

int main(){
    int soma = 0;

    printf("Este programa calcula a soma dos elementos da diagonal principal de uma matriz 3x3.\n");

    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i == j)
                soma += matriz[i][j];
        }
    }

    printf("%d", soma);

    getchar();
    return 0;
}