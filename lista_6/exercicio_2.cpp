#include <stdio.h>
#include <stdlib.h>

int sum(int n){
    if(n == 0)
        return 0;
    else
        return n + sum(n-1);
}

int main(){
    int n;
    printf("Este programa faz a soma de todos os números inteiros de 1 até n.\nDigite um inteiro: ");
    scanf("%d", &n);
    printf("Soma: %d", sum(n));
    getchar();
    return 0;
}