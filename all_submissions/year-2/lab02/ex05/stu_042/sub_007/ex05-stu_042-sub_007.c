#include <stdio.h>

int main() {

    int n, res = 1, count = 1;
    
    scanf("%d", &n);

    while (++count <= n)
        res = res * 10 + count;
    
    printf("%d\n", res);

    return 0;
}