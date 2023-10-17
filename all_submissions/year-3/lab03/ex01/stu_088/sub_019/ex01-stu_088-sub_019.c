
#include <stdio.h>

void quadrado(int N)
{
    int i, j;

    
    for(i = 1; i <= N; i++)
        {
            for(j = 0; j < N; j++)
            {
                if(j)
                    putchar('\t');
                printf("%d", j + i);
            }
            putchar('\n');
        }
}

int main()
{
    int N;

    scanf("%d", &N);
    quadrado(N); 
    return 0;
}

