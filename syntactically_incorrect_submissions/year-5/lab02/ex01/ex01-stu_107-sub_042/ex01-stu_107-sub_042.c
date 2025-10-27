
#include <stdio.h>

int main()
{
    
    int N, n;

    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &n);

        if(i == 0)
            N = n;

        if( n > N)
            N = n;
    }

    printf("%d", N);
}