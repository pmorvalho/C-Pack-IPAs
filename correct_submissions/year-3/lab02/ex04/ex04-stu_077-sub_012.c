
#include <stdio.h>

int main()
{
    int x, y, z;
    int keep;
    scanf("%d %d %d", &x, &y, &z);
    if (x > y) {
        keep = x;
        x = y;
        y = keep;
    }
    if (x > z) {
        keep = x;
        x = z;
        z = keep;
    }
    if (y > z) {
        keep = y;
        y = z;
        z = keep;
    }
    printf("%d %d %d\n", x, y, z);
    return 0;
}