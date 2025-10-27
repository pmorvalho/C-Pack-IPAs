

#include <stdio.h>

void is_divisivel_por_9(int n);

int main() {
    long n;

    scanf("%ld", &n);
    is_divisivel_por_9(n);

    return 0;
}

void is_divisivel_por_9(int n) {
    if (n % 9)
        printf("no\n");
    else
        printf("yes\n");
}