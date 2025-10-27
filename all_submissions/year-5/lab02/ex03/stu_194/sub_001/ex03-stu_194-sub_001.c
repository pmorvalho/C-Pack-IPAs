

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf((a % b) ? "no\n" : "yes\n");
    return 0;
}
