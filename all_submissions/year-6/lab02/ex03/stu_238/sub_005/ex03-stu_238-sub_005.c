
#include<stdio.h>

int N, M;



int main () {
    scanf("%d %d", &N, &M);
    printf("%s\n", (N % M == 0 || M % N == 0) ? "yes" : "no");
    return 0;                                        
}
