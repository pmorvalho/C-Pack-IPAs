

#include <stdio.h>

void cruz(int n)
{
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(i == j || i == n - j + 1) printf("*");
            else printf("-");
            if(j != n) printf(" ");
        }
        printf("\n");
    }
    

}


int main()
{
    int n;
    scanf("%d",&n);
    cruz(n);
    return 0;
}