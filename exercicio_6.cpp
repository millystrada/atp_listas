#include <stdio.h>
#include <stdlib.h>

int ehPalindromo(int num){
    int original = num;
    int invertido = 0;
    while(num > 0)
    {
        int digito = num % 10; //pegar o ultimo digito
        num /= 10; //tirar o ultimo digito
        invertido *= 10; //adicionar uma casa vazia no fim
        invertido += digito; //preencher a casa vazia com o novo digito
    }
    if(original == invertido)
    {
        return 1;
    }
    return 0;
}

int main(){
    int num;
    printf("Este programa verifica se um número é palíndromo. Digite um número inteiro: ");
    scanf("%d", &num);
    if(ehPalindromo(num))
        printf("É palíndromo!");
    else
        printf("Não é palíndromo!");
    getchar();
    return 0;
}