#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, num3, temp;
    printf("Este programa ordena três números inteiros.\nDigite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    if(num1>num2){
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num1>num3){
        temp = num1;
        num1 = num3;
        num3 = temp;
    }
    if (num2>num3){
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    
    printf("Numeros ordenados: %d %d %d\n", num1,num2,num3);

    return 0;
}