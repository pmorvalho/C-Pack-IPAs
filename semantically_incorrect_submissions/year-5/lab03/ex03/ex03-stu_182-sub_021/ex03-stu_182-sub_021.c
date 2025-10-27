
#include <stdio.h>

void cruz(int N){
    int i, j;

    for(i = 0; i < N; i++){
        for (j = 1; j <= N; j++){
            if (j == (i + 1) || j + i == N){
                printf("%c ", '*');
            }
            else{
                printf("%c ", '-');
            }
        }
        printf("\b\n");
    }
}




int main(){
    int N;

    scanf("%d", &N);

    cruz(N);

    return 0;
}