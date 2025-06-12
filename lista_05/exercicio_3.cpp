#include <stdio.h>
#include <stdlib.h>

float celsius_para_fahrenheit(float celsius){
    return (celsius * 9 / 5) + 32;
}

int main(){
    printf("%f", celsius_para_fahrenheit(27));
    return 0;
}