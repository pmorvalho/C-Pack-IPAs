
#include <stdio.h>
int main()
{
    int n,cont=0,i;

    
    scanf("%d",&n);
    i=n;
    while(i>0)
    {
        if(n%i==0)
        {
            cont++;
        }
        i--;
    }
    printf("%d",cont);
    return 0;
}