
#include <stdio.h>

int main()
{
    int um, dois, tres, max;

    scanf("%d %d %d", &um, &dois, &tres);
    max = um > dois ? um : dois;
    max = max > tres ? max : tres;
    printf("%d\n", max);
    return 0;
}