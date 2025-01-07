
#include <stdio.h>
int main()
{
    int num,divisor;
    scanf("%d%d",&num,&divisor);
    if ((num % divisor) == 0)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}