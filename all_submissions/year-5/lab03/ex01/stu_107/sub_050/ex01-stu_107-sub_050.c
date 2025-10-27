
#include <stdio.h>

void quadrado(int N);


int main()
{
    int N;

    scanf("%d", &N);
    quadrado(N);



    return 0;
}

void quadrado(int N)
{
    int l, c;
    for(l = 0; l < N; l++)
    {
        for(c = 0; c < N; c++)
        {
            if(c != 0)
                putchar('\t');
            printf("%d", l + c + 1);
        }
        putchar('\n');
    }
}