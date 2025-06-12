#include <stdio.h>
#include <stdlib.h>

void addBlankSpaces(int qtd);

int main(){
    int n;
    printf("Este programa desenha um triângulo equilátero de altura n em asteriscos. Digite a altura: ");
    scanf("%d", &n);

    for(int i = 0; i <= n; i++) {     
        int columns = 2 * n - 1;
        if(i == 0)
        {
            int sideSpaces = (columns) / 2;
            addBlankSpaces(sideSpaces + 1);
            printf("*");
            addBlankSpaces(sideSpaces + 1);
            printf("\n");
        }
        else if(i == n)
        {
            for(int num = 0; num <= columns; num++){
                printf("*");
            }
        }
        else 
        {
            int middleSpaces = 2 * i - 1;
            int sideSpaces = (columns - middleSpaces) / 2;
            addBlankSpaces(sideSpaces);
            printf("*");
            addBlankSpaces(middleSpaces);
            printf("*");
            addBlankSpaces(sideSpaces);
            printf("\n");
        }
    }
    return 0;
}

void addBlankSpaces(int qtd){
    for(int i = 0; i < qtd; i++){
        printf(" ");
    }
}