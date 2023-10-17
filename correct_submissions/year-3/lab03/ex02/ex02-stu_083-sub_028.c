
#include <stdio.h>

int main(){
    int n,i,j,k,m;
    scanf("%d", &n);
    for ( j = 1; j<=n; j++)
    {
        k=1;
        m=j;
        for ( i = 1; i <=2*(n-j); i++)
        {
            printf(" ");
        }
        while (k<=j)
        {
            if (j==1)
            {
                printf("%d\n",j);
                k++;
            }
            else{
                printf("%d ",k);
                k++;
            }
        }
        while (m-->1)
        {
            if (m>1)
            {
                printf("%d ",m);
            }
            else{
                printf("%d\n",m);
            }
        }
    }
    return 0;
}