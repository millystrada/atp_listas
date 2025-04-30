#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calcular_circulo(float raio, float *area, float *perimetro){
    *area = M_PI * pow(raio, 2);
    *perimetro = 2 * M_PI * raio ;
}

int main(){
    float area, perimetro, raio;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    calcular_circulo(raio, &area, &perimetro);
    printf("area: %f\nperimetro: %f", area, perimetro);
    getchar();
    return 0;
}