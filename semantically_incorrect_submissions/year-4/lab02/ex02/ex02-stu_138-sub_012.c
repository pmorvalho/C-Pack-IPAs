
#include <stdio.h>
int smallest(int a, int b) {
    if (a > b)
        return b;
    else
        return a;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n%d", smallest(a, b), a + b - smallest(a, b));
    return 0;
}