
#include <stdio.h>

int main(){

    int N, div;
    div = 0;
    if (scanf("%d", &N)!= 1) return 1;
    for (int i = 1; i <= N; i++){
        if (N%i == 0) ++div;
    }
    printf("%d\n", div);
    return 0;
}