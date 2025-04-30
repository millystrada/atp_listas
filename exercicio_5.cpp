#include <stdio.h>
#include <stdlib.h>

float calcula_imc(float peso, float altura) {
    return peso / (altura * altura);
}

void imprima_imc(int indice){
    if(indice < 18.5) 
     printf("Magreza");
    else if(indice < 24.9)
     printf("Saudavel");
    else if(indice < 29.9)
     printf("Sobrepeso");
    else if(indice > 30)
     printf("Obesidade");
}

int main(){
    float peso, altura;
    printf("Este programa determina a condição de saúde baseada no imc.");
    printf("\nDigite o peso: ");
    scanf("%f", &peso);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    imprima_imc(calcula_imc(peso, altura));
    getchar();
    return 0;
}