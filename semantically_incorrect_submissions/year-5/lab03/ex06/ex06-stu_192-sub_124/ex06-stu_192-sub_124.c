
#include <stdio.h>

int main() {
    char n;
    long int m = 0;
    n = getchar();
    while(n != EOF) {
        m = n + m;
        n = getchar();
    }
    printf("%ld\n", m);
    (m%9 == 0) ? printf("yes\n") : printf("no\n");
    return 0;
}