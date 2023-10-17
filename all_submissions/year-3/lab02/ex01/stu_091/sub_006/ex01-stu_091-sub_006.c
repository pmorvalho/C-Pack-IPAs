
#include <stdio.h>

int main()
{
    int primeiro, segundo , terceiro;
    scanf("%d",&primeiro);
    scanf("%d",&segundo);
    scanf("%d",&terceiro);
    
    if (primeiro > segundo && primeiro > terceiro)
    {
        printf("%d\n",primeiro);
        return 0;
    }
    if (primeiro < segundo && segundo > terceiro)
    {
        printf("%d\n",segundo);
        return 0;
    }
    if (primeiro < terceiro && segundo < terceiro)
    {
        printf("%d\n",terceiro);
        return 0;
    }
    return 0;
}
