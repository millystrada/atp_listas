#include <stdio.h>
#include <stdlib.h>

int main() {
    float raio, area;

    printf("Este programa calcula a área de um círculo dado seu raio.\nDigite um valor para o raio: ");
    scanf("%f", &raio);

    area = raio * raio * 3.14;

    printf("A área do círculo de raio %f é %f", raio, area);
    
    return 0;
}