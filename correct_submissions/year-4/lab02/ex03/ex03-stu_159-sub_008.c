
#include <stdio.h>

int main() {
    int v1, v2;
    scanf("%d %d", &v1, &v2);
    if (!(v1 % v2)) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    return 0;
}