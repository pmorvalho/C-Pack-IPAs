
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d/n", a, b, c);
    if (a<b)
        (c<a) ? printf("%d%d%d/n", c, a, b) : printf("%d%d%d/n", a, c, b); 
    if (b>a)
        (c>=b) ? printf("%d%d%d/n", a, b, c);
    if (b=a)
        (c>a) 
    return 0;
}