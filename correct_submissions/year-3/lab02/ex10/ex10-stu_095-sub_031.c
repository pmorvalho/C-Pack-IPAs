
#include <stdio.h>

int main()
{
    int N;
    int i=0, s=0;
    scanf("%d", &N);
    if (N>0)
    {
        while(N>0)
        {
            s+=N%10;
            N=N/10;
            i++;
        }
        printf("%d\n%d\n", i, s);
    }
    return 0;
}
