

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
            if (j != 0)
                printf("\t");
            printf("%d", i + j);
        }
        printf("\n");
    }

    return 0;
}