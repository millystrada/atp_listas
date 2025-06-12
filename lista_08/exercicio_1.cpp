#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Este programa aloca um vetor com n posições.\nDigite um valor inteiro para n: ");
    scanf("%d", &n);
    int *v = NULL;
    v = (int*) malloc(n * sizeof(int));
    if (v == NULL)
    {
        printf("Erro ao alocar o vetor.");
        return 0;
    }
    for(int i = 0; i < n; i++) v[i] = i;
    for(int i = 0; i < n; i++) printf("%d ", v[i]);
    free(v);
    getchar();
    return 0;
}