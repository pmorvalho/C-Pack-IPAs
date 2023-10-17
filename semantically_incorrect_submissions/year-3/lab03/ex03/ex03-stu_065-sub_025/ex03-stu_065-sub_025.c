
#include <stdio.h>

void cruz(int N){
    int a, b;
    for (a = 0; a < N; a++){
        for(b=0; b<N; b++){
            if (a==b || a+b == N-1)
                printf("* ");
            else
                printf("- ");
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