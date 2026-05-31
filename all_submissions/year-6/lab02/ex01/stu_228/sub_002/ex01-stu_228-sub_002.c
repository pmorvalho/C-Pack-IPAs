

#include <stdio.h>
int main() {
    int a, b, c;
    printf("Digite 3 números: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) return 1;
    printf("%d\n", (a > b && a > c) ? a : (b > c ? b : c));
    return 0;
}