#include <stdio.h>



int main()
{
    int primeiro,segundo,terceiro,maior;


    scanf("%d%d%d", &primeiro,&segundo,&terceiro);

    {if (segundo > primeiro && segundo > terceiro)
        maior = segundo;
     else
        if(terceiro > primeiro)
            maior = terceiro;
        else
            maior = primeiro;
    }

    printf("%d\n",maior);

    return 0;
} 
