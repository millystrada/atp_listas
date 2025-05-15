#include <stdio.h>
#include <stdlib.h>

long long int calculaPotencia(int b, int e){
    if(e == 0)
     return 1;
    else 
     return b * calculaPotencia(b, e-1);
}

int main(){
    int base, expoente;
    printf("Este programa calcula o valor de uma base elevada a um expoente.\nDigite um inteiro para a base: ");
    scanf("%d", &base);
    printf("Digite um inteiro para o expoente: ");
    scanf("%d", &expoente);
    printf("%dˆ%d = %lld", base, expoente, calculaPotencia(base, expoente));
    getchar();
    return 0;
}