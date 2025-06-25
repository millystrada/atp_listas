#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo = fopen("../matriz.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo matriz.txt\n");
        return 1;
    }

    int n;
    if (fscanf(arquivo, "%d", &n) != 1) {
        printf("Erro ao ler o tamanho da matriz\n");
        fclose(arquivo);
        return 1;
    }

    int **matriz1 = (int**) malloc(n * sizeof(int*));
    int **matriz2 = (int**) malloc(n * sizeof(int*));
    int **soma =(int**)  malloc(n * sizeof(int*));
    if (!matriz1 || !matriz2 || !soma) {
        printf("Erro na alocação de memória\n");
        fclose(arquivo);
        return 1;
    }
    for (int i = 0; i < n; i++) {
        matriz1[i] = (int*) malloc(n * sizeof(int));
        matriz2[i] = (int*) malloc(n * sizeof(int));
        soma[i] = (int*) malloc(n * sizeof(int));
        if (!matriz1[i] || !matriz2[i] || !soma[i]) {
            printf("Erro na alocação de memória\n");
            fclose(arquivo);
            return 1;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (fscanf(arquivo, "%d", &matriz1[i][j]) != 1) {
                printf("Erro ao ler matriz1\n");
                fclose(arquivo);
                return 1;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (fscanf(arquivo, "%d", &matriz2[i][j]) != 1) {
                printf("Erro ao ler matriz2\n");
                fclose(arquivo);
                return 1;
            }
        }
    }

    fclose(arquivo);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            soma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    printf("Matriz soma:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }

    free(matriz1);
    free(matriz2);
    free(soma);

    return 0;
}
