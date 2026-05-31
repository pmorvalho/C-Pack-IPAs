
#include <stdio.h>

int main(){

    int N , M;

    if (scanf("%d%d", &N, &M)!= 2) return 1;

    if (N % M == 0) {
        printf("yes\n");
    }

    else printf("no\n");

    return 0;
}