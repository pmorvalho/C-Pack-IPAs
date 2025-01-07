

#include <stdio.h>

int main()
{

    int number;

    if ((scanf("%d", &number) != 1) || (number < 2))
    {
        return 2;
    }

    for (int i = 1; i <= number; i++)
    {
        for (int j = 0; j < number; j++)
        {
            printf("%d\t", i + j);
        }
        printf("\n");
    }

    return 0;
}