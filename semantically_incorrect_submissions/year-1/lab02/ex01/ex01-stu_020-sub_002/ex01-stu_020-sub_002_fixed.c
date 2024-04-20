#include <stdio.h>



int main()
{
    int primeiro,segundo,terceiro,maior;


    scanf("%d%d%d", &primeiro,&segundo,&terceiro);
    maior=primeiro;
    {if (primeiro > segundo)    
        {
        if (primeiro > terceiro)
            maior = primeiro;
        }
    }

    {
    if (segundo > primeiro)    
        {   
        if (segundo > terceiro)
            maior = segundo;
        }   
    }

    {
    if (terceiro > primeiro)    
        {   
        if (terceiro > segundo)
            maior = terceiro;
        }   
    }
    printf("%d\n",maior);

    return 0;
}
