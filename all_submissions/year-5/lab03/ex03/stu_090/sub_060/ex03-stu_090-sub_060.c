

#include <stdio.h>

void cruz(int N){
    int i;
    int base = 0;
    while(base<N){
        for (i=0; i<N; i++){
            if(i==base || i==N-base-1)
                printf("*");
            else
                printf("-");
            if(i==N-1)
                printf("\n");
        }
        base++;
    }
}

int main(){
    int N;
    scanf("%d", &N);
    cruz(N);
    return 0;
}