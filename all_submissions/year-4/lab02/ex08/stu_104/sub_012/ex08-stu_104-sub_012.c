

#include <stdio.h>

int main()
{

    int max_nums;

    if (scanf("%d", &max_nums) != 1)
    {
        return 2;
    }

    float average = 0;
    for (int i = 1; i <= max_nums; i++)
    {
        float number;

        if (scanf("%f", &number) != 1)
        {
            return 2;
        }

        average += number;

        if (i == max_nums)
        {
            average = average / i;
        }
    }

    printf("%.2f\n", average);

    return 0;
}