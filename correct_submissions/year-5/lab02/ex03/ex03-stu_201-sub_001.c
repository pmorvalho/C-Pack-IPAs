
#include <stdio.h>

int main() {
    int n, m;

    if(scanf("%d%d", &n, &m) != 2)
        return 1;

    printf((n % m == 0) ? "yes\n" : "no\n");

    return 0;
}