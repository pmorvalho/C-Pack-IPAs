

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    int temp;
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}
