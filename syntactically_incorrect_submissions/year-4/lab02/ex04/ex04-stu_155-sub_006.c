
#include <stdio.h>

int main()
{
    int ar[3];
    scanf("%d %d %d", &ar[0], &ar[1], &ar[2]);

    int i = 1;
    while (i < 3)
    {
        if (ar[i] < ar[i - 1])
        {
            int aux = ar[i - 1];
            ar[i - 1] = ar[i];
            ar[i] = aux;
        }
        ++i;
    }

    printf("%d %d %d\n", ar[0], ar[1], ar[2]);

    return 0;
}