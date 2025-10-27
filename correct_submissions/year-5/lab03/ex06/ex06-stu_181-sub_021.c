

#include <stdio.h>

int main() {
    long int n;
    scanf("%ld", &n);
    if (n%9 == 0)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}
