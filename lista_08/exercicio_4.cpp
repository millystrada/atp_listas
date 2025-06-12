#include <stdio.h>
#include <stdlib.h>

int* retornaPares(int vector[], int t, int *qtd){
    int *pares = NULL;
    int aux = 1;
    for(int i = 0; i < t; i++){
        if(vector[i] % 2 == 0)
        {
            int *temp = (int*) realloc(pares, aux * sizeof(int));
            if(temp != NULL)
            {
                pares = temp;
                temp[*qtd] = vector[i];
                aux++;
                (*qtd)++;
            }
        }
    }
    return pares;
}

int main(){
    int tam;
    printf("Estee programa utiliza uma função que retorna um vetor realocado dinamicamente e contém apenas um números pares de um outro vetor.\n");
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    int *v = (int*) malloc(tam * sizeof(int));
    if(v != NULL)
    {
        for(int i = 0; i < tam; i++){
            printf("Digite o %d-ésimo elemento do vetor: ", i+1);
            scanf("%d", &v[i]);
        }
        int qtdPares = 0;
        int *p = retornaPares(v, tam, &qtdPares);
        if(p != NULL){
            printf("Vetor de pares: ");
            for(int i = 0; i < qtdPares; i++){
                printf("%d ", p[i]);
            }
        }
        else printf("Não há pares no vetor.");
        free(v);
        free(p);
    }
    getchar();
    return 0;
}