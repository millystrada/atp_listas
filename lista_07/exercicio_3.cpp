#include <stdio.h>
#include <stdlib.h>

void leVetor(int length, char vetor[]){
    for(int i = 0; i < length; i++)
    {
        printf("Digite o %d° elemento do vetor: ", (i+1));
        scanf(" %c", &vetor[i]);
    }
}

int main(){
    int t;
    char x;
    bool existe = false;
    printf("Este programa identifica um elemento x em um vetor a de tamanho t.\nDigite o tamanho do vetor: ");
    scanf("%d", &t);
    char a[t];
    leVetor(t, a);
    printf("Digite o elemento a ser procurado: ");
    scanf(" %c", &x);
    for(int i = 0; i < t; i++)
    {
        if(a[i] == x)
        {
            printf("O elemento %c está presente no vetor a na posição %d", x, i);
            existe = true;
        }
    }
    if(!existe){
        printf("Não existe tal elemento no vetor");
    }
    getchar();
    return 0;
}