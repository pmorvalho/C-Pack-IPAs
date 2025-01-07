
#include <stdio.h>

int main() {
    int n1,n2;
    scanf("%d %d", &n1, &n2);
    if (n1 > n2) {
        printf("%d %d", n1, n2);
    }
    else printf("%d %d", n2, n1);
}
