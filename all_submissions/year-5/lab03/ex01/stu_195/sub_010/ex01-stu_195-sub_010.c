
#include <stdio.h>

void quadrado (int N){
    int i, c = 1, f = 1;
    for (i = 1; i < N; i++){
        while (c < N){
            printf("%d\t", f);
            f++;
            c++;
        }
        c = 1;
        printf("%d\n", f);
        f = i;
        f++;       
    }
    while (c < N){
        printf("%d\t", f);
        f++;
        c++;
    }
    printf("%d\n", f);
}

int main(){
    int n;
    scanf("%d", &n);
    while (n < 2){
        scanf("%d", &n);
    }
    quadrado(n);
    return 0;
}