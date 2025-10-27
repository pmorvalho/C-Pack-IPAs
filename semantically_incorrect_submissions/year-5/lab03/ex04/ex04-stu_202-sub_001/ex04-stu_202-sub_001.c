

#include <stdio.h>

int main () {
    int v;

    scanf("%d", &v);
    while (v >= 0) {
        printf("%d\n", v);
        scanf("%d", &v);
    }
    return 0;
}