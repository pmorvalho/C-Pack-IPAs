
#include <stdio.h>
int main () {
    int M, N;
    scanf("%d%d", &M, &N);
    if (M%N == 0) {
        printf("yes");
    }
    else{
        printf("no");
    }
    printf("\n");
    return 0;
}
