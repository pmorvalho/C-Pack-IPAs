
#include <stdio.h>

void piramide(int N);


int main()
{
    int N;

    scanf("%d", &N);

    piramide(N);

    return 0;
}

void piramide(int N)
{
    int l, c, number;

    for(l = 0; l < N ; l++)
    {
        number = 1;
        for(c = 1; c <= N + l; c++)
        {
            if(c >= N)
                printf("%d", number--);
            else if (c >= N - l)
                printf("%d", number++);
            else 
                printf(" ");
        }
        printf("\n");
    }
}