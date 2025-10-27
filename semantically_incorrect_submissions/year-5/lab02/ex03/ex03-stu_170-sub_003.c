
#include <stdio.h>

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    printf("%s", (N%M==0 ? "yes" : "no"));
    return 0;
}