#include <stdio.h>
#include <stdlib.h>

int main() {
    int value;

    printf("Este programa verifica se um número inteitro é par ou impar.\nDigite um número inteiro: ");
    scanf("%d", &value);

    if(value % 2 == 0)
        printf("O número %d é par.", value);
    else
        printf("O número %d é ímpar.", value);
    return 0;
}