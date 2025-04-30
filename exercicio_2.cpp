#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a = 1;
int b = 2;
int c = 3;

float quadratica(float x) {
    return  pow(x, 2) * a + x*b + c;
}

int main(){
    printf("%f", quadratica(2));
    getchar();
    return 0;
}