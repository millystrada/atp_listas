#include <stdio.h>
#include <stdlib.h>

void showValuesStatus(int num1, int num2);

int main() {
    int firstNum, secondNum;

    printf("Este programa recebe dois valores e os inverte nas variáveis.\nDigite o primeiro valor: ");
    scanf("%d", &firstNum);

    printf("Digite o segundo valor: ");
    scanf("%d", &secondNum);

    showValuesStatus(firstNum, secondNum);
    
    firstNum -= secondNum;
    secondNum += firstNum;
    firstNum = secondNum - firstNum;

    showValuesStatus(firstNum, secondNum);

    return 0;
}

void showValuesStatus(int num1, int num2) {
    printf("\n\n---------------------");
    printf("\nSTATUS DAS VARIAVEIS");
    printf("\na: %d", num1);
    printf("\nb: %d", num2);
    printf("\n---------------------");
}