
#include <stdio.h>
int main()
{
    int N, i, d;
    d=0;
    scanf("%d", &N);
    i=N;
    while (--i)
    {
        if (N%i==0)
        {
            d++;
        }
    }
    printf("%d", d);
    return 0;

    

}