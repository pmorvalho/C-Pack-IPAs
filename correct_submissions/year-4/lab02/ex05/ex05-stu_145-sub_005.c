

#include <stdio.h>

int main() {
    int n;
    int var = 1;
    scanf("%d", &n);
    while(var <= n)
    {
        printf("%d\n", var);
        ++var;
    }      
    return 0;
}