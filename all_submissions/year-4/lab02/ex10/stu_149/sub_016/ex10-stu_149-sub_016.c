
#include <stdio.h>

int main() {
    int n;
    int sum = 0, count = 0;
    scanf("%d", &n);
    if (n == 0) {
        printf("1\n0\n");
        return 0;
    }
    while(n!=0) {
        sum = sum + n%10;
        count++;
        n = n/10;
    }
    printf("%d\n%d\n", count,sum);
    return 0;
}