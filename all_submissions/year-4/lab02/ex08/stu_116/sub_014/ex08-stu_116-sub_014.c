
#include <stdio.h>

int main()
{
    int n, nOriginal;
    float media = 0, incremento;

    scanf("%d", &n);
    nOriginal = n;

    while (n--)
    {
        scanf("%f", &incremento);
        media += incremento;
    }
    printf("%.2f\n", (media / nOriginal));

    return 0;
}