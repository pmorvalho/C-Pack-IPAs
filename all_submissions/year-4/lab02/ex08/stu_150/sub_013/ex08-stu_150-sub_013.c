

#include <stdio.h>

int main()
{
    int n;
    float aux,media;
    media = 0.0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &aux);
        media = media + aux;
    }
    media = media / n;
    printf("%.2f", media);
    return 0;
}