
#include <stdio.h>

int main()
{
    int maior;
    int menor;
    scanf("%d%d", &maior, &menor);
    if (maior<menor)
    {
        printf("%d\n%d\n", maior, menor);
    }
    else 
    {
        printf("%d\n%d\n", menor, maior);
    }
return 0;
}


