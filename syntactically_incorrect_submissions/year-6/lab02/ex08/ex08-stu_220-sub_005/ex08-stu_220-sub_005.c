
#include <stdio.h>

int main()
{
    float media = 0, n = 0, num = 0;
    scanf("%f", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &num);
        media += num;
    }
    media /= n;
    printf("%.2f\n", media);

    return 0;
}