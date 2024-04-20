

#include <stdio.h>
int main ()
{
    int N, M;
    scanf ("%d\t%d", &N, &M);
    if (N%M==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    printf("\n");
    return 0;

}
