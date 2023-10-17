
#include <stdio.h>
int main()
{
    int N, i, d;
    d=0;
    i=N;
    scanf("%d", &N);
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