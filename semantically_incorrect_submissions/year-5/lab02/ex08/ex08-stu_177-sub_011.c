    
#include <stdio.h>

int main(){
    int n, i;
    float num, soma, n_float;
    scanf("%d", &n);
    n_float = n;
    for(i = 0; i < n; ++i){
        scanf("%f", &num);
        soma += num;
    }
    printf("%f\n", soma/n_float);
    return 0;
}