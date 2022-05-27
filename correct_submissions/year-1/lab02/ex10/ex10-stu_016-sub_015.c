#include <stdio.h>

int main(){
    int n, num_dig = 0, sum = 0;
    scanf("%d", &n);
    while(n>0){
        num_dig++;
        sum += n % 10;
        n = n / 10;
    }
    printf("%d\n", num_dig);
    printf("%d\n", sum);
    return 0;
}