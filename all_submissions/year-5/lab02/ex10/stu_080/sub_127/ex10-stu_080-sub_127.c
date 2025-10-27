
#include <stdio.h>

int main(){
    int N, digits = 0, sum = 0;
    scanf("%d", &N);
    while(N > 0){
        sum += N % 10;
        N /= 10;
        digits++;
    }

    printf("%d\n%d\n", digits, sum);
    return 0;
}