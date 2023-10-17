

#include <stdio.h>

void quadrado(int n){
    int i, j, estado = 0;
    for (j = 1; n >= j; j++){
        for (i = 1; n >= i; i++){
            if (i == n)
                printf("%d", i + estado);
            printf("%d\t", i + estado);
        }
        estado ++;
        putchar('\n');
    }
}

int main(){
    int n;
    scanf("%d",&n);
    quadrado(n);
    return 0;
}