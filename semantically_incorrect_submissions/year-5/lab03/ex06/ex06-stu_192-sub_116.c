
#include <stdio.h>

int main() {
    char n;
    long int m;
    n = getchar();
    while(n != EOF) {
        m = n + m;
        n = getchar();
    }
    (m%9 == 0) ? printf("yes") : printf("no");
    return 0;
}