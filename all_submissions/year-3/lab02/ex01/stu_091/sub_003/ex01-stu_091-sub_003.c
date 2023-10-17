


#include <stdio.h>

int main()
{
    int primeiro , segundo , terceiro , m;
    scanf("%d%d%d",&primeiro,&segundo,&terceiro);

    m = primeiro > segundo ? primeiro : segundo;
    m = terceiro > m ? terceiro : m;

    printf("%d\n",m);
    return 0;
}