
#include <stdio.h>

int main(){

    int N, M;

    scanf("%d%d", &M, &N);

    printf((M%N == 0) ? "Yes\n" : "No\n");

    return 0;
}