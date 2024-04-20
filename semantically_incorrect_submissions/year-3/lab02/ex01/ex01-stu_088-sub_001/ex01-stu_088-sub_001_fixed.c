
#include <stdio.h>

int main()
{
    int um, dois, tres, maior = 0;
    scanf("%d %d %d", &um, &dois, &tres);
    if(um >= dois && um >= tres)
        maior = um;
    else if(dois >= um && dois >= tres)
        maior = dois;
    else
        maior = tres;
    printf("%d\n", maior);
    return 0;
}
