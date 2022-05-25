#include <stdio.h>

int main() {
    int n, i; 
    i = 0;
    scanf("%d", &n);
    while ( i != n)
        printf("%d\n", ++i);
    return 0;
}