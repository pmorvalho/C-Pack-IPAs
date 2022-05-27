#include <stdio.h>
int main()
{
    int n, cont;
    float i, media;
    scanf("%d %f", &n, &i);
    media = i;
    for (cont = 1; cont < n; cont++)
    {
        scanf("%f", &i);
        media = media + i;
    }
    media = media / n;
    printf("%.2f\n", media);
    return 0;
}