#include <stdio.h>
#include <stdlib.h>

int qtdAlg(int n){
    if(n < 10)
      return 1;
    else
      return 1 + qtdAlg(n/10);
}

int main(){
    int n;
    printf("Este programa retorna o número de algarismos de um número inteiro.\nDigite um inteiro: ");
    scanf("%d", &n);
    printf("Algarismos: %d", qtdAlg(n));
    getchar();
    return 0;
}