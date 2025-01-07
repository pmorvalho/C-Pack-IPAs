
#include <stdio.h>

int main()
{
    int N, h, v;
    scanf("%d", &N);
    for (v = 0; v < N; ++v)
    {
        for (h = 0; h < N; ++h)
        {
            if (h) putchar('\t');
            printf("%d", v+h+1);
        }
        putchar('\n');
    }
    return 0;
}