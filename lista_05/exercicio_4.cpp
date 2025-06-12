#include <stdio.h>
#include <stdlib.h>

int eh_primo(int num){
    if(num <= 1) return 0;
    for(int i = (num - 1); i > 1; i--){
        if(num % i == 0)
        return 0;
    }
    return 1;
}

int main(){
    int x;
    printf("Esse programa verifica se um numero eh primo.\nDigite um inteiro: ");
    scanf("%d", &x);
    if(eh_primo(x)){
        printf("%d é primo", x);
    }
    else{
        printf("%d não é primo", x);
    }
    return 0;
}