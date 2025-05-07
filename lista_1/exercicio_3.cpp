#include <stdio.h>
#include <stdlib.h>

int main() {
    float firstNum, secondNum, soma;
    printf("Este programa soma dois números quebrados, onde as casas decimais são separadas por um ponto (.).\nDigite um número quebrado: ");
    scanf("%f", &firstNum);

    printf("Digite outro número quebrado: ");
    scanf("%f", &secondNum);

    soma = firstNum + secondNum;
    printf("A soma dos dois números quebrados é: %f", soma);

    return 0;
}