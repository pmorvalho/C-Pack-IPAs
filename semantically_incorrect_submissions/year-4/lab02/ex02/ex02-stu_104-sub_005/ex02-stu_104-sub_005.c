

#include <stdio.h>
#include <stdbool.h>
#include <float.h>

int main()
{
    float biggest = FLT_MAX, lowest = FLT_MIN, temp;
    bool only_once = true;

    while (scanf("%f", &temp) == 1)
    {
        if (only_once)
        {
            only_once = false;
            lowest = temp;
            biggest = temp;
        }

        if (temp > biggest)
        {
            biggest = temp;
        }
        else if (temp < lowest)
        {
            lowest = temp;
        }
    }

    printf("min: %f, max: %f\n", lowest, biggest);

    return 0;
}