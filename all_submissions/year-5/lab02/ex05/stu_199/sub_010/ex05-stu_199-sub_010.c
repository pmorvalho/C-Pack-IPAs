

#include <stdio.h>

int main() 
{
    int n1, n2;
    n2 = 1;
    scanf("%d", &n1);
    while (n2 <= n1) {
        printf("%d\n", n2);
        n2++;
    }
    return 0;
}