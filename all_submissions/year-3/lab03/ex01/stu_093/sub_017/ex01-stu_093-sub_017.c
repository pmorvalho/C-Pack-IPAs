
#include <stdio.h>

void quadrado(int n){
    int i, j;

    for(i = 1; i <= n; i++){
        if(i > 1)
            printf("%d\n", (n + i - 2));
        for(j = i; j < n + (i - 1); j++)
            printf("%d\t", j);

    }

    printf("%d\n", n + i - 2);
}

int main(){
    
    int n;

    scanf("%d", &n);
    quadrado(n);

    return 0;
}