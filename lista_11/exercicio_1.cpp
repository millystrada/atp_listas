#include <stdio.h>
#include <stdlib.h>

int ehPrimo(int num){
    if(num == 0 || num == 1) return 0; // atendem as condições de um primo, mas não são
    for(int i = 2; i < num; i++){
        if(num % i == 0)
        return 0;
    }
    return 1;
}

int main(int argc, char *argv[]){
    if(argc != 3) return 1;
    int inicio = atoi(argv[1]);
    int fim = atoi(argv[2]);
    for(int i = inicio; i <= fim; i++)
    {
        if(ehPrimo(i)) printf("%d ", i);
    }
    getchar();
    return 0;
}