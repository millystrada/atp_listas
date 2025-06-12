#include <stdio.h>
#include <stdlib.h>

int main() {
    int firstNum, secondNum, soma;

    printf("Este prrograma soma dois números inteiros.\nDigite um número inteiro: ");
    scanf("%d", &firstNum);

    printf("Digite outro número inteiro: ");
    scanf("%d", &secondNum);

    soma = firstNum+secondNum;

    printf("A soma dos dois inteiros é: %d", soma);

    return 0;
}