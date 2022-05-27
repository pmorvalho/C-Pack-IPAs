#include <stdio.h>



int main()
{

    int primeiro,segundo,terceiro,maior;

    printf("Insira três números ");
    scanf("%d%d%d", &primeiro,&segundo,&terceiro);

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
    printf("O maior lido foi %d\n",maior);
    return 0;
}