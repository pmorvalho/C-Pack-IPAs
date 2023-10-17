

#include <stdio.h>

void cruz(int N){
    int l, c;

    for(l=1; l <= N; l++){
        for(c=1; c <= N; c++){
            if (c == l || (c + l) == (N+1)) 
                printf("*");
            else
                printf("-");
        }
        printf("\n");
    } 
}

int main(){
    int N;
    scanf ("%d", &N);

    cruz(N);
    return 0;
}