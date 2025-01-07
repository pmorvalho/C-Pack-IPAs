
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int nums[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < nums[i]; j++)
        {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}