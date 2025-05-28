#include <stdio.h>
#include <stdlib.h>

int existeNoVetor(char x, char vet[], int t){
    for(int i = 0; i < t; i++)
    {
        if(vet[i] == x)
        {
            return 1;
        }
    }
    return 0;
}

void imprimeInterseccao(char vetor1[], char vetor2[], int t){
    char comuns[t];
    int indiceComuns = 0;
    for(int i = 0; i < t; i++)
    {
        for(int j = 0; j < t; j++)
        {
            if(vetor1[i] == vetor2[j] && !existeNoVetor(vetor1[i])) 
            {
                comum[indiceComuns] = vetor1[i];
                indiceComuns++;
            }
        }
    }
    for(int i = 0; i <= indiceComuns; i++)
    {
        printf("O elemento %c é comum aos dois vetores.\n", vetor1[i]);
    }
}

void leVetor(int length, char vetor[], char nome[]){
    for(int i = 0; i < length; i++)
    {
        printf("Digite o %d° elemento do vetor %s: ", (i+1), nome);
        scanf(" %c", &vetor[i]);
    }
}

int main(){
    printf("Este programa recebe dois vetores e imprime os valores comuns aos dois.\n");
    printf("Digite o tamanho dos vetores: ");
    int t;
    scanf("%d", &t);
    char a[t];
    leVetor(t, a, "A");
    char b[t];
    leVetor(t, b, "B");
    imprimeInterseccao(a, b, t);
    getchar();
    return 0;
}