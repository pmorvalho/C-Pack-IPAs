
#include <stdio.h>

int main()
{
    int N, div = 0;

    scanf("%d", &N);

    for(int i = N; i > 0; i--)
    {
        if( N % i == 0)
        {
            div++;            
        }
    }

    printf("%d\n", div);
    return 0;
}