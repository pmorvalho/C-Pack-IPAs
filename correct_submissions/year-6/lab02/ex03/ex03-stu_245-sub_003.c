
#include <stdio.h>

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    (N > 0 && M > 0 && N%M == 0)?printf("yes\n"):printf("no\n");
    return 0;
}