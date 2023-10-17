
#include <stdio.h>

int main()
{
    int n, seg, min, hour;
    scanf("%d", &n);
    hour = n / 3600;
    min = (n % 3600) / 60;
    seg = (n % 3600) % 60;
    printf("%02d:%02d:%02d\n", hour, min, seg);
    return 0;
}