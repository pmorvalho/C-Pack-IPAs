
#include <stdio.h>
int main()
{
    int n,cont,i;

    scanf("%d",&n);
    i=n;
    while(i>0)
    {
        if(n%i==0)
        {
            cont++;
        }
    }
    printf("%d",cont);
    return 0;
}