#include <stdio.h>
#include <stdlib.h>

int somar(int a, int b);
int subtrair(int a, int b);
int multiplicar(int a, int b);
float dividir(int a, int b);

int main(){
    int operacao, a, b;
    printf("Este programa é uma calculadora simples de dois inteiros.\nEscolha uma operação: \n");
    printf("0 - Somar dois números\n");
    printf("1 - Subtrair a de b\n");
    printf("2 - Multiplicar dois números\n");
    printf("3 - Dividir a por b\n");
    scanf("%d", &operacao);
    printf("Digite dois números inteiros: ");
    scanf("%d%d", &a, &b);

    if(operacao == 0)
        printf("A soma de %d e %d é %d", a, b, somar(a, b));
    else if(operacao == 1)
        printf("A subtracao de %d por %d é %d", a, b, subtrair(a, b));
    else if(operacao == 2)
        printf("A multiplicacao de %d e %d é %d", a, b, multiplicar(a, b));
    else if(operacao == 3)
        printf("A divisao de %d por %d é %d", a, b, dividir(a, b));
    else
    printf("Digite uma operação válida");

    getchar();
    return 0;
}

int somar(int a, int b){
    return a + b;
}

int subtrair(int a, int b){
    return a - b;
}

int multiplicar(int a, int b){
    return a * b;
}

float dividir(int a, int b){
    return a / b;
}
