
#include <stdio.h>

void cruz(int N){
    int i, j;
    
    for(i = 1; i <= N; i++) {
        for(j = 1; j <= N; j++) {
            printf("%c", (j == i || j == N - (i - 1)? '*' : '-'));
        }
        printf("\n");
    }
}

int main(){
    int N;
    scanf("%d", &N);
    cruz(N);
    return 0;
}
