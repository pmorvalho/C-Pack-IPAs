#include <stdio.h>



int main()
{
    int N, i, num;
    float media, sum;

    scanf("%d", &N);
    sum = 0;
    for (i = 0; i < N; ++i)
    {
        scanf("%d", &num);
        sum = sum + num;
    }
    
    media = sum / N;
    printf("%.2f\n", media);

    return 0;
}
