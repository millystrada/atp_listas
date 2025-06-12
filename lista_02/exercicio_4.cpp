#include <stdio.h>
#include <stdlib.h>

int idade, anosServico;
int canRetireByAge();
int canRetireByWorkingYears();
int canRetireByAgeAndWorkingYears();

int main(){
    printf("Este programa verifica se pode-se aposentar.\nDigite a idade: ");
    scanf("%d", &idade);
    printf("Digite os anos de serviço: ");
    scanf("%d", &anosServico);

    if(canRetireByAge() || canRetireByWorkingYears() || canRetireByAgeAndWorkingYears())
     printf("Pode-se aposentar.");
    else
     printf("Não pode-se aposentar.");

    return 0;
}

int canRetireByAge() {
    return idade >= 65;
}

int canRetireByWorkingYears() {
    return anosServico >= 30;
}

int canRetireByAgeAndWorkingYears() {
    return idade >= 60 && anosServico >= 25;
}