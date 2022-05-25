#include <stdio.h>

void piramide(int N){
    
    int i, j, k, l;
    k = 1;

    while( N != 0){
        for (i = 1; i <= (N * 2) - 2; ++i){
            printf(" ");
        }
        for (j = 1; j <= k; ++j){
            if (k == 1){
                printf("%d\n", j);
            } else{
                printf("%d ", j);
            }
        }
        ++k;
        if (k != 2){
            for (l = k - 2; l > 1; --l){
                printf("%d ", l);
            }
            printf("%d\n", l);
        }
        --N;
    }
}

int main(){
    int N;
    scanf("%d", &N);

    piramide(N);

    return 0;
}