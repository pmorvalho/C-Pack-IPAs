#include <stdio.h>
int main()
{
    int primeiro,segundo,terceiro;
    scanf("%d%d%d", &primeiro,&segundo,&terceiro);

    {if (primeiro > segundo)    
        {
        if (primeiro > terceiro){
            printf("%d\n",primeiro);
        }
            
        }
    }
    {
    if (segundo > primeiro)    
        {   
        if (segundo > terceiro){
            printf("%d\n",segundo);
        }
        }   
    }
    {
    if (terceiro > primeiro)    
        {   
        if (terceiro > segundo){
            printf("%d\n",terceiro);
        }
        }   
    }
    return 0;
}