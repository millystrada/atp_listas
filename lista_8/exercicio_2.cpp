#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Este programa aloca um vetor com n posições a serem preenchidas.\nDigite um valor inteiro para n: ");
    scanf("%d", &n);
    char *v = NULL;
    v = (char*) malloc(n * sizeof(char));
    if (v == NULL)
    {
        printf("Erro ao alocar o vetor.");
        return 0;
    }
    for(int i = 0; i < n; i++) {
        printf("Digite o %d° elemento do vetor: ", i+1);
        scanf(" %c", &v[i]);
    }
    for(int i = 0; i < n; i++) printf("%c ", v[i]);
    free(v);
    getchar();
    return 0;
}