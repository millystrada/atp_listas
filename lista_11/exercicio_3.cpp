#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void geraCartela(FILE *arquivo) {
    for (int i = 0; i < 5; i++) {
        fprintf(arquivo, "%d, ", (rand() % 15) + 1);
        fprintf(arquivo, "%d, ", (rand() % 15) + 16);

        if (i == 2)
            fprintf(arquivo, "FREE, ");
        else
            fprintf(arquivo, "%d, ", (rand() % 15) + 31);

        fprintf(arquivo, "%d, ", (rand() % 15) + 46);
        fprintf(arquivo, "%d\n", (rand() % 15) + 61);
    }
}

int main() {
    srand(time(NULL));

    FILE *arquivo = fopen("../cartelas.csv", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo.");
        return 1;
    }

    int qtd;
    printf("Digite a quantidade de cartelas: ");
    scanf("%d", &qtd);

    for (int i = 0; i < qtd; i++) {
        fprintf(arquivo, "B, I, N, G, O\n");
        geraCartela(arquivo);
        fprintf(arquivo, "\n");
    }

    fclose(arquivo);
    printf("Cartelas geradas em 'cartelas.csv'.");

    getchar();
    return 0;
}