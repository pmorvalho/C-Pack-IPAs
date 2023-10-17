

#include <stdio.h>

int main(){
    
    int N, H, M, S;
    scanf("%d", &N);

    H = N/3600;
    M = (N % 3600)/60;
    S = N % 60;
    
    if(0<= H <= 9 || 0<= M <= 9 || 0<= S <= 9)
        printf("0%d:0%d:0%d\n", H, M, S);

    printf("%d:%d:%d\n", H, M, S);
    return 0;
}