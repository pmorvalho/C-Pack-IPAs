

#include <stdio.h>

int main()
{
    int seg = 0, min = 0, hr = 0;
    scanf("%d",&seg);
    min = seg / 60;
    seg = seg % 60;
    hr = min / 60;
    min = min % 60;
    printf("%02d:%02d:%02d\n",hr,min,seg);
    return 0;
}