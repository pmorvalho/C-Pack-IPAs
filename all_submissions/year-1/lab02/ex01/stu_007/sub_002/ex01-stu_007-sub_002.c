#include <stdio.h>



int main()
{
    int N, i;
    float media, sum, num;

    scanf("%d", &N);
    sum = 0;
    for (i = 0; i < N; ++i)
    {
        scanf("%f", &num);
        sum = sum + num;
    }
    
    media = sum / N;
    printf("%.2f\n", media);

    return 0;
}
