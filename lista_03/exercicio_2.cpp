#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Este programa verifica se um inteiro é primo.\nDigite um intiero: ");
    scanf("%d", &n);

    if(n == 1){
        printf("1 não é um número primo");
        return 0;
    }

    for(int i = 2; i < n; i++){
        if(n % i == 0){
            printf("Não é um número primo, pois também é divisível por %d", i);
            return 0;
        }
    }

    printf("É um número primo.");
    getchar();
    return 0;
}