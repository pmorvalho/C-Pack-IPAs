
#include <stdio.h>

void quadrado(int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(j) putchar('\t');
            printf("%d", i + j + 1);
        }
        putchar('\n');
    }
}

int main(){
    int n;
    if (scanf("%d", &n) != 1 || n < 2) return 0;
    quadrado(n);
    return 0;
}