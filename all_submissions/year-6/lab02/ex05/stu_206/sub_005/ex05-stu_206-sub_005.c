

#include <stdio.h>

int main() {
    int num, i;
    if (scanf("%d", &num) != 1) return 1;
    i = 1;
    while (i <= num) {
        printf("%d\n", i);
        i = i + 1;
    }
    return 0;
}