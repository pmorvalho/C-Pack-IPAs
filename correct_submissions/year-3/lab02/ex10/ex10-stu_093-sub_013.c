
#include <stdio.h>

int main(){

    int n, sum = 0, num = 0;

    scanf("%d", &n);

    while((n % 10) != n){
        sum += (n % 10);
        n /= 10;
        num++;
    }

    printf("%d\n%d\n", num + 1, sum + 1);

    return 0;
}