
#include <stdio.h>

#define VECMAX 100

void repeat (char c , int count )
{
    for (int i = 0; i<count;i++)
        printf("%c", c);
}

int main()
{
    int s, i,p;
    scanf("%d",&s);

    for (i = 0; i <= s; i++)
    {
        scanf("%d",&p);
        repeat('*',p);
        printf("\n");
    }
    return 0;
}