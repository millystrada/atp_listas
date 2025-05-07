#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, fatorial;
    printf("Este programa calcula o fatorial de um número inteiro.\nDigite um inteiro: ");
    scanf("%d", &n);

    fatorial = n;

    for(int i = 1; i < n; i++){
        fatorial *= (n-i);
    }
    printf("O fatorial de %d é %d", n, fatorial);
    getchar();
    return 0;
}