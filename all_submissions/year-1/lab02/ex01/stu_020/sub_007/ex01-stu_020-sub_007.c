#include <stdio.h>



int main()
{
    int primeiro,segundo,terceiro;

    printf("Insira três números ");
    scanf("%d%d%d", &primeiro,&segundo,&terceiro);

    {if (primeiro > segundo)    
        {
        if (primeiro > terceiro)
            return primeiro;
        }
    }

    {
    if (segundo > primeiro)    
        {   
        if (segundo > terceiro)
            return segundo;
        }   
    }

    {
    if (terceiro > primeiro)    
        {   
        if (terceiro > segundo)
            return terceiro;
        }   
    }
   
    return 0;
}