
#include <stdio.h>


int main()
{
    int N, n = 0, sum = 0;

    scanf("%d", &N);

    while(N > 0)
    {
        n++;

        sum = sum + (N % 10);

        N = N / 10;
    }

    printf("%d\n%d\n", n, sum);
    
    return 0;
}