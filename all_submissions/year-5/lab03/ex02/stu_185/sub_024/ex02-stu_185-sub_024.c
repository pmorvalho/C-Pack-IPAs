
#include <stdio.h>
void piramide(int N){
    int i, j, n;
    if (N >= 2){
        for(i = 1; i <= N; i++){
            for(n = 0; n < N - i; n++) printf("  ");

            for(j = 1; j <= i; j++){
                printf("%d ", j);
            }

            for(j = i-1; j >= 1; j--){
                printf("%d ", j);
            }
            
            printf("\n");
        }
    }
}

int main(){
    int N;
    scanf("%d", &N);
    piramide(N);
    return 0;
}