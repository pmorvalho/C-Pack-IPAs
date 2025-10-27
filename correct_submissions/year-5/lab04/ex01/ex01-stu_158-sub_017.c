
#include <stdio.h>

#define VECMAX 100

int main() {
    int n = -1, temp;

    while (n < 0 || n >= VECMAX) scanf("%d", &n);
    while (n--) {
        scanf("%d", &temp);
        while (temp--) putchar('*');
        putchar('\n');
    }


    return 0;
}