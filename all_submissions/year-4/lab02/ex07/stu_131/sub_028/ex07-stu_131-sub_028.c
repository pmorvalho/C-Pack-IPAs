
#include <stdio.h>
int main()
{
    int n,i;
    int cont=0;

    scanf("%d",&n);
    i=n;
    while(i>0)
    {
        if(n%i==0)
        {
            cont++;
        }
        --i;
    }
    printf("%d",cont);
    return 0;
}