#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, soma, subtracao, divisao, multiplicacao;

    printf("Esse programa calcula a soma, subtração, multiplicação e divisão de um número pelo outro.\nDigite o primeiro número: ");
    scanf("%f", &a);
    printf("Digite o segundo número: ");
    scanf("%f", &b);

    soma = a + b;
    subtracao = a - b;
    multiplicacao = a * b;
    divisao = a / b;

    printf("\n-------------------\n");
    printf("a + b = %f\n", soma);
    printf("a - b = %f\n", subtracao);
    printf("a * b = %f\n", multiplicacao);
    printf("a / b = %f\n", divisao);
    printf("-------------------");

    return 0;
}