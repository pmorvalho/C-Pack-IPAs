
#include <stdio.h>

int main(){
    int num_N, num_M;
    scanf("%d %d", &num_N,&num_M);
    if (num_N<num_M) {
        printf("%d\n%d\n", num_N,num_M);
    } else {
        printf("%d\n%d\n", num_M,num_N);
    }
    return 0;
}