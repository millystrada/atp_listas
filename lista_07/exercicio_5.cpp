#include <stdio.h>
#include <stdlib.h>

void inverteVetor(char *vetor, int tamanho){
    char *inicio = vetor;
    char *fim = vetor + tamanho - 1;
    int t = tamanho - 1;
    while(inicio < fim)
    {
        char aux = *inicio;
        *inicio = *fim;
        *fim = aux;
        inicio++;
        fim--;
    }
    printf("Inversão: %s", vetor);
}

void leVetor(int length, char vetor[]){
    for(int i = 0; i < length; i++)
    {
        printf("Digite o %d° elemento do vetor: ", (i+1));
        scanf(" %c", &vetor[i]);
    }
}

int main(){
    int t;
    printf("Este progrma utiliza uma função com ponteiro para inverter a ordem dos elementos de um array.\n");
    printf("Digite o tamanho do array: ");
    scanf("%d", &t);
    char v[t];
    leVetor(t, v);
    inverteVetor(v, t);
    getchar();
    return 0;
}