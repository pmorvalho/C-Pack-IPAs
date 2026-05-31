
#include <stdio.h>


int main()
{
    int N;
    float n, total = 0, media;


    scanf("%d", &N);

    for(int i = 0; i < N; i++)
    {
        scanf("%f", &n);
        total += n;
    }

    media = total / N;
    printf("%.2f\n", media);
    
    return 0;
}