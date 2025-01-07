
#include <stdio.h>

int main(){
    int N, digits = 1, sum = 0;

    scanf("%d", &N);

    while (N / 10 > 0){
        sum += N % 10;
        N = N / 10;
        digits++;
    }

    sum += N;
    printf("%d\n%d\n", digits, sum);

    return 0;
}