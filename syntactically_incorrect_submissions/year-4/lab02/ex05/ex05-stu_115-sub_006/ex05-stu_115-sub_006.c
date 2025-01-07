
#include <stdio.h>
int n;

int main() {
    int i = 1;
    scanf("%d", &n);
    for (i; i != n+1; i++)
        printf("%d\n", i);
    return 0;
}