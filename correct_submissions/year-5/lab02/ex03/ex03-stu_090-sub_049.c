

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (!(a%b))
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}