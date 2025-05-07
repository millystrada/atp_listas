#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, absoluteNum;
    
    printf("Este programa retorna o valor absoluto de um inteiro.\nDigite um inteiro: ");
    scanf("%d", &num);

    absoluteNum = abs(num);

    printf("O valor absoluto de %d é %d", num, absoluteNum);

    return 0;
}