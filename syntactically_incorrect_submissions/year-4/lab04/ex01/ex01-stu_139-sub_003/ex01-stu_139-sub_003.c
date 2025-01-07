

#include <stdio.h>
#include <string.h>

int main()
{
    int n, number;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number);
        for (int j = 0; j < number; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}