

#include <stdio.h>
#include <string.h>

#define VECMAX 100

int main()
{
    int n;
    int max = 0;

    scanf("%d", &n);
    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }

    for (int j = 0; j < max; j++) 
    {
        for (int g = 0; g < n; g++) 
        {
            if (numbers[g] >= max - j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}