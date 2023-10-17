
#include <stdio.h>

int main()
{
    int primeiro, segundo , terceiro;
    scanf("%d",&primeiro);
    scanf("%d",&segundo);
    scanf("%d",&terceiro);
    
    if (primeiro > segundo && primeiro > terceiro)
    {
        printf("%d",primeiro);
        return 0;
    }
    if (primeiro < segundo && segundo > terceiro)
    {
        printf("%d",segundo);
        return 0;
    }
    if (primeiro < terceiro && segundo < terceiro)
    {
        printf("%d",terceiro);
        return 0;
    }
}