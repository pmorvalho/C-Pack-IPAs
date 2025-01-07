
#include <stdio.h>

int main(){
    int N,H,M,S;
    scanf("%d",&N);
    S = N%60;
    M = N/60%60;
    H = N/60/60%60;
    if (H<10)
        printf("0%d:",H);
    else 
        printf("%d:",H);
    if (M<10)
        printf("0%d:",M);
    else
        printf("%d:",M);
    if (S<10)
        printf("0%d",S);
    else
        printf("%d",S);
}

