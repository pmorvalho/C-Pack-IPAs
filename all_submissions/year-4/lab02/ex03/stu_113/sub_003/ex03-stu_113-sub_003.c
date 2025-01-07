
#include <stdio.h>

int main()
{
    int x1, x2;
    scanf("%d", &x1), scanf("%d", &x2); 
    
    if (x1 % x2 == 0) {
        printf("yes\n");
    } else printf("no\n");
    return 0;
}
