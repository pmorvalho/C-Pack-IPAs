
#include <stdio.h>

int main()
{
    int tim, sec, min, hor;
    scanf("%d", &tim);
    sec = tim % 60; tim = tim / 60;
    min = tim % 60; tim = tim / 60;
    hor = tim % 24;
    printf("%02d:%02d:%02d\n", hor, min, sec);
    return 0;
}
