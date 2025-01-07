
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
    int N, M, smaller, bigger;
    scanf("%d %d", &N, &M);
    smaller = N;
    bigger = M;
    if(M < smaller){
        smaller = M;
        bigger = N;
    }

    printf("%d\n", smaller);
    printf("%d\n", bigger);

    return 0;
}