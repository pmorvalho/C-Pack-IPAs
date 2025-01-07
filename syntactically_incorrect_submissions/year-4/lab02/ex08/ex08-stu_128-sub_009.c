
#include <stdio.h>

int main()
{
    int n;
    float temp;
    float media = 0;
    scanf("%d", &n);
    for (int i = 1; i<=n ;i++)
    {
        scanf("%f", &temp);
        media = media + temp;
    }
    media = media / n;
    printf("%.2f\n", media);
    return 0;
}