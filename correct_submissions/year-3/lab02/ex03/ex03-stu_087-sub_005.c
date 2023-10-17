
#include <stdio.h>

int main(){

    int N, M;

    scanf("%d%d", &M, &N);

    if (N == 0){
        printf("no\n");
    }else{
        printf((M%N == 0) ? "yes\n" : "no\n");
    }

    return 0;
}