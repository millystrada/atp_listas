#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, f1, f2, f3;
    printf("Este programa calcula até o n-ésimo termo de uma cadeia de fibonacci.\nDigite o número:");
    scanf("%d", &n);

    f1 = 0;
    f2 = 1;
    f3 = 0;

    if(n == 1)
    {
        printf("O %d-ésimo termo de fibonacci é %d", n, f1);
    }
    else if(n == 2) {
        printf("O %d-ésimo termo de fibonacci é %d", n, f2);
    }
    else {
            for(int i = 3; i <= n; i++){
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
            }

        printf("O %d-ésimo termo de fibonacci é %d", n, f3);
        getchar();
    }
    return 0;
}