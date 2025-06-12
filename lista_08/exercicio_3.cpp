#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Este programa aloca um vetor de n números inteiros. O vetor termina quando a entrada for -1.\n");

    int *v = NULL;
    int tam = 0;
    int aux;

    while (1) {
        printf("Digite o %d° elemento do vetor: ", tam + 1);
        scanf("%d", &aux);

        if (aux == -1) break;

        int *novo = (int*) realloc(v, (tam + 1) * sizeof(int));
        if (novo == NULL) {
            printf("Erro ao realocar memória.\n");
            free(v);
            return 1;
        }

        v = novo;
        v[tam] = aux;
        tam++;
    }

    printf("Vetor digitado: ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    free(v);
    getchar();
    return 0;
}