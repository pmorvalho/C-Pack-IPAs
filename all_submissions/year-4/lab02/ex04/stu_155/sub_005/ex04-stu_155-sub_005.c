
#include <stdio.h>

int main()
{
    int ar[3];
    scanf("%d %d %d", &ar[0], &ar[1], &ar[2]);

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (ar[i] < ar[j])
            {
                int aux = ar[j];
                ar[j] = ar[i];
                ar[i] = aux;
            }
        }
    }

    printf("%d %d %d\n", ar[0], ar[1], ar[2]);

    return 0;
}