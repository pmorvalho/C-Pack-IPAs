
#include <stdio.h>

int main()
{
    int num,i, res=0;
    scanf("%d",&num);
    for(i=num; i>0; i--)
    {
        if (num%i ==0)
            res++;
    };
    printf("%d", res);
    return 0;
}