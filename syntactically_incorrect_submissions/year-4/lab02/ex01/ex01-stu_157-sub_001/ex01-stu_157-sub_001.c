

#include <stdio.h>

int main() {
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    int max = n1;
    if (n2 > n1) {
        max = n2;
        if (n3 > n2) {
            max = n3;
        }
    }

    else if (n3 > n2) {
        n3 = max;
    }
    printf("%d\n", max);
}