#include <stdio.h>
#include <stdlib.h>

int main() {
    int value;

    printf("Este programa verifica se um número inteiro é positivo ou negativo.\nDigite um número inteiro: ");
    scanf("%d", &value);

    if(value > 0)
        printf("O número %d é positivo.", value);
    else
        printf("O número %d é negativo.", value);

    return 0;
}