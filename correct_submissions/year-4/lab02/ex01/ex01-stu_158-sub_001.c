
#include <stdio.h>

int main() {
    int n, m, p;
    
    scanf("%d %d %d", &m, &n, &p);
    if (m >= n && m >= p) {
        printf("%d\n", m);
    } else if (n >= m && n >= p) {
        printf("%d\n", n);
    } else {
        printf("%d\n", p);
    }
    return 0;
}