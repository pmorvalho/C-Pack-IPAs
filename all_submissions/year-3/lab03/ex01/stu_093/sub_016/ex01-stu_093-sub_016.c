
#include <stdio.h>

void quadrado(int n){
    int i, j;

    for(i = 1; i <= n; i++){
        printf("\n");
        for(j = i; j < n + i; j++)
            printf("%d\t", j);
    }
}

int main(){
    
    int n;

    scanf("%d", &n);
    quadrado(n);

    return 0;
}