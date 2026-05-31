

#include <stdio.h>

int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) !=2) return 1;
    printf(a % b != 0 ? "no\n" : "yes\n");
    return 0;
}