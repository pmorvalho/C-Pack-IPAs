#include <stdio.h>
#define VECMAX 100

int main()
{
    int n, i, j, nums[VECMAX], max = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        if (nums[i] > max)
        {
            max = nums[i];
        }
    }
    for (i = 0; i < max; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (nums[j] > 0)
            {
                putchar('*');
                nums[j]--;
            }
            else
            {
                putchar(' ');
            }
        }
        if (i < max - 1)
        {
            putchar('\n');
        }
    }
    return 0;
}