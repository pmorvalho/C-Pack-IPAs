
#include <stdio.h>

int main() {
    char n;
    long int m;
    n = getchar();
    while(n != EOF || n != '\n') {
        m = n + m;
        n = getchar();
    }
    (m%9 == 0) ? printf("yes\n") : printf("no\n");
    return 0;
}