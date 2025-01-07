
#include<stdio.h>

int main() {
    int n, m, divisor;
    scanf("%d %d", &n, &m);
    divisor = n / m;
    if (divisor * m == n) {
        printf("yes\n");
    }
    else {
        printf("no\n");
    }
    return 0;
}