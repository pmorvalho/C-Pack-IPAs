
#include <stdio.h>

void quadrado(int N)
{
    for(int j = 0; j < N; j++)
    {
        for(int i = j + 1; i <= N + j; i++)
        {
            printf("%d\t", i);
        }
        printf("\n");
    }


}

int main()
{
    int N;
    
    scanf("%d", &N);

    quadrado(N);

    return 0;
}