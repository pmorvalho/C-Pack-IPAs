
#include <stdio.h>

int main()
{
    int x1, x2, x3;
    scanf("%d%d%d", &x1, &x2, &x3);
    if (x1 <= x2 && x1 <= x3) {
        if (x2 <= x3) printf("%d %d %d\n", x1, x2, x3); 
        else printf("%d %d %d\n", x1, x3, x2); 
    } else if (x2 <= x3 && x2 <= x1) {
        if (x3 <= x1) printf("%d %d %d\n", x2, x3, x1);
        else printf("%d %d %d\n", x2, x1, x3);
    } else if (x2 <= x1) printf("%d %d %d\n", x3, x2, x1);
    else printf("%d %d %d\n", x3, x1, x2);
    return 0;
}
