

#include <stdio.h>

int main(){
    int N;
    int num_digits = 0;
    int sum_digits = 0;

    scanf("%d", &N);
    
    while (N>0){
        sum_digits += N%10;
        num_digits += 1;
        N = N/10;
    }

    printf("%d\n", num_digits);
    printf("%d\n", sum_digits);
    
    return 0;
}