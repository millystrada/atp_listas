#include <stdio.h>
#include <stdlib.h>

void leVetor(int length, char nomeVetor[], char vetor[]){
    for(int i = 0; i < length; i++)
    {
        printf("Digite o %d° elemento do %s vetor: ", i+1, nomeVetor);
        scanf(" %c", &vetor[i]);
    }
}

int main(){
    int length;
    printf("Este programa imprime os valores de dois vetores de mesmo tamanho, intercalando-os.\n");
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &length);
    char a[length];
    char b[length];
    leVetor(length, "primeiro", a);
    leVetor(length, "segundo", b);
    for(int i = 0; i < length; i++){
        printf("%c\n%c\n", a[i], b[i]);
    }
    getchar();
    return 0;
}