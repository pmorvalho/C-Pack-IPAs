
#include <stdio.h>

int main() {
    int N, M;
    
    scanf("%d", &N);
    scanf("%d", &M);
    
    if (N % M == 0)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}