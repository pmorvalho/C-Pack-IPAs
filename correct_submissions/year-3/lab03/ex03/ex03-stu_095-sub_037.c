

#include <stdio.h>
void cruz(int N);
int main()
{
    int N;
    scanf("%d", &N);
    cruz(N);
    return 0;
}

void cruz(int N)
{
    int l, c;
    for (l=0; l<N; l++)
    {
        for (c=0; c<N; c++)
        {
            if (c)
            putchar (' ');
        putchar ((l==c)||(l+c==N-1)?'*':'-');
        }
        putchar ('\n');
    }
}