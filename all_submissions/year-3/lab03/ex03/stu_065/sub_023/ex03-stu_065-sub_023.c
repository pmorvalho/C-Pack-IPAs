
#include <stdio.h>

void cruz(int N){
    int a, b;
    for (a = 0; a < N; a++){
        for(b=0; b<N-1; b++){
            if (a==b || a+b == N-1)
                printf("* ");
            else
                printf("- ");
        }
        if (a==b || a+b == N-1)
                printf("*\n");
        else
            printf("-\n");
    }

}

int main(){
    int N;
    scanf("%d", &N);
    cruz(N);
    return 0;
}