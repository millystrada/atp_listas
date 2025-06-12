#include <stdio.h>
#include <stdlib.h>

int main() {
    int firstNum, secondNum;
    printf("Este programa soma dois inteiros, utilizando-se de apenas duas variáveis.\nDigite um inteiro: ");
    scanf("%d", &firstNum);

    printf("Digite outro inteiro: ");
    scanf("%d", &secondNum);

    firstNum += secondNum;

    printf("A noma dos dois inteiros é: %d", firstNum);

    return 0;
}