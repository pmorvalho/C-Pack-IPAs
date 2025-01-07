
#include <stdio.h>

int main(){
    int n, count, d = 10, sum = 0;
    scanf("%d", &n);

    while (n != 0){
        sum += (n % d);
        printf("%d\n", sum);
        n /= d;
        count++;
    }

    printf("%d\n%d\n", count, sum);
    return 0;
}