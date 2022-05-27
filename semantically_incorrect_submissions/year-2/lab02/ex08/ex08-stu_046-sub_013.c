#include <stdio.h>

int main()
{
    int i, s = 0;
    float N, x, media;

    scanf("%f", &N);

    for(i = 1; i <= N; i++)
    {
        scanf("%f", &x);
        s += x;
    }

    media = s/N;
    printf("%.2f\n", media);

    return 0;
}

