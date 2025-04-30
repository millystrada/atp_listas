#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float distancia(int x1, int x2, int y1, int y2){
    int a = x2 - x1;
    int b = y2 - y1;
    a *= a;
    b *= b;
    return sqrt(a + b);
}

int main(){
    int x1, x2, y1, y2;
    printf("Este programa calcula a distância euclidiana entre dois pontos. Digite as coordenadas de um ponto (x, y): ");
    scanf("%d%d", &x1, &y1);
    printf("Digite as coordenadas do segundo ponto (x, y): ");
    scanf("%d%d", &x2, &y2);
    printf("Distância entre os pontos: %.2f", distancia(x1, x2, y1, y2));
    getchar();
    return 0;
}