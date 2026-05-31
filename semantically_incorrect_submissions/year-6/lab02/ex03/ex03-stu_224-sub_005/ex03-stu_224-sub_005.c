
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a % b == 0) {
        return 1;
    } else {
        return 0;
    }
}