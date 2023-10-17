
#include <stdio.h>

int main()
{
    int maior;
    int menor;
    scanf("%d%d", &maior, &menor);
    if (maior<menor)
    {
        printf("%d\n%d", maior, menor);
    }
    else 
    {
        printf("%d\n%d", menor, maior);
    }
return 0;
}


