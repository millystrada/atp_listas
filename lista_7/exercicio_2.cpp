#include <stdio.h>
#include <stdlib.h>

void leVetor(int length, char nomeVetor[], int vetor[]){
    for(int i = 0; i < length; i++)
    {
        printf("Digite o %d° elemento do %s vetor: ", i+1, nomeVetor);
        scanf("%d", &vetor[i]);
    }
}

int main(){
    int length = 5;
    int a[length];
    int b[length];
    printf("Este programa imprime os valores de dois vetores em ordem.\n");
    leVetor(length, "primeiro", a);
    leVetor(length, "segundo", b);
    for(int i = 0; i < length; i++){
        printf("%d\n%d\n", a[i], b[i]);
    }
    getchar();
    return 0;
}