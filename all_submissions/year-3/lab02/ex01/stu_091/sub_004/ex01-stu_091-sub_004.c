
#include <stdio.h>

int main()
{
    int x = 0 , primeiro, segundo , terceiro;
    scanf("%d",&primeiro);
    scanf("%d",&segundo);
    scanf("%d",&terceiro);
    
    if (primeiro > segundo && segundo > terceiro)
    {
        printf("%d",primeiro);
    }
    if (primeiro < segundo && segundo > terceiro)
    {
        printf("%d",segundo);
    }
    if (primeiro < terceiro && segundo < terceiro)
    {
        printf("%d",terceiro);
    }
    return 0;
}