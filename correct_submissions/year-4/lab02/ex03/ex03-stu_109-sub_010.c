
#include <stdio.h>

int main(){
    int N, M;

    scanf("%d%d", &N, &M);

    printf("%s\n", N % M == 0? "yes" : "no");

    return 0;

}