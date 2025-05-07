#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, f1, f2, f3;    
    printf("Este programa calcula uma cadeia de fibonacci até n.\nDigite o número: ");
    scanf("%d", &n);

    f1 = 0;
    f2 = 1;
    f3 = 0;

    if(n < 1)
    {
        printf("Cadeia até o %d-ésimo termo: %s", n, "Não há cadeia válida!");
    }
    else if(n == 1)
    {
        printf("Cadeia até o %d-ésimo termo: %d", n, f1);
    }
    else {
        printf("Cadeia até o %d-ésimo termo: %s", n, "0 1");
        for(int i = 3; i <= n; i++){
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;

            printf(" %d", f3); 
        }
    }
    
    getchar();
    return 0;
}