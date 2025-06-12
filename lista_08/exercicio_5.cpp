#include <stdio.h>
#include <stdlib.h>

int main(){
    int colunas, linhas;
    printf("Este programa simula uma matriz usando apenas um vetor dinâmico.\nDigite o número de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas: ");
    scanf("%d", &colunas);
    int tamanhoVetor = linhas * colunas;
    int *vetorMatriz = (int*) calloc(tamanhoVetor, sizeof(int));
    
    int aux = 0;
    for(int i = 0; i < linhas; i++)
    {
        for(int j = 0; j < colunas; j++)
        {
            printf("%d ", vetorMatriz[aux]);
            aux++;
        }
        printf("\n");
    }
    free(vetorMatriz);
    getchar();
    return 0;
}