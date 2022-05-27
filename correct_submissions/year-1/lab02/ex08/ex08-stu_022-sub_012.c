#include <stdio.h>

int main() {
    int n, i;
    float soma, ad;
    scanf("%d", &n);
    for (i=0; i < n; ++i){
        scanf("%f", &ad);
        soma += ad;
    }
    printf("%.2f\n", soma / n);
    
    return 0;
}