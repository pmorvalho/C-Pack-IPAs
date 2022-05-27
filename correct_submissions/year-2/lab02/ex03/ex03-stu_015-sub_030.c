#include <stdio.h>

int N, M;

int main(){

    scanf("%d%d", &M, &N);

    if (M % N == 0)
        printf("yes\n");
    else
        printf("no\n");

    return 0;
    
}       