

#include <stdio.h>

int main() {
    int n, i;
    double val, soma;
    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        scanf("%lf", &val);
        soma += val;
    }
    printf("%2f\n", soma/n);
    return 0;
}