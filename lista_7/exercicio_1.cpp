#include <stdio.h>
#include <stdlib.h>

int main(){
    char palavra[100];
    printf("Este programa imprime a primeira letra de uma palavra.\nDigite uma palavra: ");
    scanf("%s", palavra);
    printf("A palavra %s começa com %c.", palavra, palavra[0]);
    getchar();
    return 0;
}