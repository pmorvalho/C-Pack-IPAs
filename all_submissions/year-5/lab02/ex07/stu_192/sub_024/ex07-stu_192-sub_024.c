
#include <stdio.h>

int main() {
    int n, i = 1;
    int divisores = 0;
    scanf("%d", &n);
    while(i<=n) {
        if(n%i==0)
            ++divisores;
        ++i;
    }
    printf("%d\n", divisores);
    return 0;
}