

#include <stdio.h>

int main()
{

    int number;

    if (scanf("%d", &number) != 1)
    {
        return 2;
    };

    for (int i = 1; i <= number; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}