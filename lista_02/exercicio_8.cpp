#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void orderNumbers(int *num1, int *num2, int *num3);
int verifyPythagoras(int num1, int num2, int num3);

int main() {
    int lado1, lado2, lado3;
    printf("Este programa verifica se um triangulo eh retangulo dado seus lados.\nDigite os lados do triangulo: ");
    scanf("%d%d%d", &lado1, &lado2, &lado3);

    orderNumbers(&lado1, &lado2, &lado3);

    if(verifyPythagoras(lado1, lado2, lado3))
        printf("O triangulo eh retangulo.");
    else
        printf("O triangulo nao eh retangulo.");

    return 0;
}

int verifyPythagoras(int num1, int num2, int num3) {
    return (pow(num1, 2) + pow(num2, 2)) == pow(num3, 2);
}

void orderNumbers(int *num1, int *num2, int *num3) {
    int temp;

    if(*num1 > *num2) {
        temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }
    if (*num1 > *num3) {
        temp = *num1;
        *num1 = *num3;
        *num3 = temp;
    }
    if (*num2 > *num3) {
        temp = *num2;
        *num2 = *num3;
        *num3 = temp;
    }
}