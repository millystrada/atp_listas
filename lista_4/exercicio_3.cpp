#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    printf("Este programa recebe dois inteiros e devolve o resultado de sua comparação.\nDigite dois inteiros: ");
    scanf("%d%d", &a, &b);

    if(a == b)
    {
        printf("Esses números são iguais.");
    }
    else if(a > b)
    {
        printf("%d é maior.", a);
    }
    else 
    {
        printf("%d é maior.", b);
    }
    return 0;
}