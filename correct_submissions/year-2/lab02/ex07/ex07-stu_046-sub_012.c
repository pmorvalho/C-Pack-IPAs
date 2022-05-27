#include <stdio.h>

int N, i, c = 0;

int main()
{
    scanf("%d", &N);

    for(i = 1; i <= N; i++)
    {
        if(N % i == 0)
            c++;
    }

    printf("%d\n", c);

    return 0;
}

