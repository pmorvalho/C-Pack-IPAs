
#include <stdio.h>

void cruz(int N){

    for (int i = 0; i < N; i++){
        if (i == 0 || i == N - 1){
            printf("*");
        }
        else{
            printf("-");
        }

        for (int j = 1; j < N; j++){
            if ( j == i || j == N - (i+1)){
                printf(" *");
            }
            else{
                printf(" -");
            }
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