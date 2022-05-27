#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    if (a < b && a < c)
    {
        if (b < c)
        {
            printf(" %d",a);
            printf(" %d",b);
            printf(" %d",c);
        }
        else
        {
            printf(" %d",a);
            printf(" %d",c);
            printf(" %d",b);
        }
    }
    if (b<a && b<c)
    {
        if (a<c)
        {
            printf(" %d",b);
            printf(" %d",a);
            printf(" %d",c);
        }
        else
        {
            printf(" %d",b);
            printf(" %d",c);
            printf(" %d",a);
        }
    }
    if (c<b && c<a)
    {
        if (a<b)
        {
            printf(" %d",c);
            printf(" %d",a);
            printf(" %d",b);
        }
        else
        {
            printf(" %d",c);
            printf(" %d",b);
            printf(" %d",a);
        }
        
    }
    return 0;
}