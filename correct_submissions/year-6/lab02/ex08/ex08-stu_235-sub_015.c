
#include <stdio.h>

int main ()
{
    int n, i;
    float num, s, media;

    scanf("%d", &n);
    for(i = 0;i < n; i++)
    {
        scanf("%f", &num);
        if (i==0)
            s = num;
        else
            s += num;
    }

    media = s/n;
    printf("%.2f\n", media);

    return 0;
}