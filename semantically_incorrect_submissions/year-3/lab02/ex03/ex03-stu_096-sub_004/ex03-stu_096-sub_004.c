
#include <stdio.h>
int main () {
    int M, N;
    scanf("%d%d", &M, &N);
    if (N%M == 0) {
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}