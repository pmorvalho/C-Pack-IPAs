

#include <stdio.h>
int main () {
    int n1 = 0, n2 = 0;
    scanf("%d %d", &n1, &n2);
    if (n1 < n2) {
        printf("%d\n%d\n", n1, n2);
    }
    else printf("%d\n%d\n", n2, n1);
    return 0;
}