#include <stdio.h>
#include <stdlib.h>

int main() {
    int lado1, lado2, lado3;
    printf("Este programa identifica o tipo de um triângulo, dado seus lados.\nDigite os lados do triângulo: ");
    scanf("%d%d%d", &lado1, &lado2, &lado3);

    if(abs(lado1-lado2) < lado3 && lado3 < (lado1+lado2))
    {
        if(lado1 == lado2 && lado1 == lado3)
            printf("O triângulo é equilátero.");
        else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
            printf("O triângulo é isósceles.");
        else 
            printf("O triângulo é escaleno.");
    }
    else
        printf("O triângulo é inválido.");
    
    return 0;
}