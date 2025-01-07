
#include <stdio.h>

int main()
{
    int ar[3], max;
    scanf("%d" "%d" "%d", &ar[0], &ar[1], &ar[2]);

    max = ar[0];
    for (int i = 1; i < 3; ++i)
    {
        if (ar[i] > max)
        {
            max = ar[i];
        }
    }

    printf("%d\n", max);

    return 0;
}