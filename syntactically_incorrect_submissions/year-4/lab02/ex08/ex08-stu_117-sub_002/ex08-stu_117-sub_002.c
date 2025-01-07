
#include <stdio.h>

int main()
{
    int N;
    float num, media = 0;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++) {
        scanf("%f", &num);
        media += num;
    }
    media /= N;
    printf("%.2f\n", media);
    return 0;
}