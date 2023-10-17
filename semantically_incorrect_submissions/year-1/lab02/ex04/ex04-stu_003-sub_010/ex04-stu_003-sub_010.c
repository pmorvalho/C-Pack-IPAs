#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    if (a < b && a < c)
    {
        if (b < c)
        {
            printf("%d\n",a);
            printf("%d\n",b);
            printf("%d\n",c);
        }
        else
        {
            printf("%d\n",a);
            printf("%d\n",c);
            printf("%d\n",b);
        }
    }
    if (b<a && b<c)
    {
        if (a<c)
        {
            printf("%d\n",b);
            printf("%d\n",a);
            printf("%d\n",c);
        }
        else
        {
            printf("%d\n",b);
            printf("%d\n",c);
            printf("%d\n",a);
        }
    }
    if (c<b && c<a)
    {
        if (a<b)
        {
            printf("%d\n",c);
            printf("%d\n",a);
            printf("%d\n",b);
        }
        else
        {
            printf("%d\n",c);
            printf("%d\n",b);
            printf("%d\n",a);
        }
        
    }
    return 0;
}