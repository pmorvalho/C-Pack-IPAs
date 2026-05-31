
#include <stdio.h>

int main()
{
    int n, i;
    float media, v;
    scanf("%d", &n);
    i = 0;
    media = 0;
    while (n-- > 0)
    {
        scanf("%f", &v);
        media += v;
        i++;
    }
    media = media / i;
    printf("%.2f\n", media);
    return 0;

}