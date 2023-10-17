
#include <stdio.h>

int main()
{
    int num1, i;
    float num2, min, max;

    scanf("%d", &num1);

    for (i = 0; i < num1; i++)
    {
        if (i == 0)
        {
            scanf("%f", &num2);
            min = num2;
            max = num2;
        }
        else
        {
            if (min < num2)
            {
                min = num2;
            }
            else if (max > num2)
            {
                max = num2;
            }
        }
    }

    printf("min: %f, max: %f\n", min, max);

    return 0;
}
