#include <stdio.h>



int main()
{
    int primeiro,segundo,terceiro,maior;

    printf("Insira três números ");
    scanf("%d%d%d", &primeiro,&segundo,&terceiro);

    {if (segundo > primeiro)
        maior = segundo;
     else
        if(terceiro > primeiro)
            maior = terceiro;
        else
            maior = primeiro;
    }

    printf("O maior número é %d \n",maior);

    return 0;
}