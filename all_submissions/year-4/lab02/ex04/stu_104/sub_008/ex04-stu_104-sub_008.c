

#include <stdio.h>

int main()
{
    int num1, num2, num3;

    if (scanf("%d%d%d", &num1, &num2, &num3) != 3)
    {
        return 2;
    }

    int max, min, mid;

    int base_comparison = num1 > num2 ? 1 : 0;

    max = base_comparison ? num1 : num2;
    max = max > num3 ? max : num3;

    min = !base_comparison ? num1 : num2;
    min = min < num3 ? min : num3;

    mid = base_comparison ? num1 : num2;
    mid = mid > num3 ? num3 : mid;

    printf("%d %d %d\n", min, mid, max);

    return 0;
}
