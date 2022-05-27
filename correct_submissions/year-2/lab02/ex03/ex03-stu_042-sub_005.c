#include <stdio.h>



#define RESTO 0

int main() {

    int n, d;

    scanf("%d%d", &n, &d);
    
    if (n % d == RESTO)
        printf("yes\n");
    else
        printf("no\n");
    
    return 0;
}