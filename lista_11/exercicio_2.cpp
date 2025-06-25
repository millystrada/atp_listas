#include <stdio.h>
#include <stdlib.h>

double arredonda(double valor, int casas = 0){
    int fator = 1;
    for(int i = 0; i < casas; i++){
        fator *= 10;
    }
    return((int)(valor * fator + 0.5)/(double) fator); 
}

int main(int argc, char *argv[]){
    if(argc < 2) return 1;
    double valor = atof(argv[1]);
    int casas = 0;
    if(argc == 3) casas = atoi(argv[2]);
    printf("%f\n", arredonda(valor, casas));
    getchar();
    return 0;
}