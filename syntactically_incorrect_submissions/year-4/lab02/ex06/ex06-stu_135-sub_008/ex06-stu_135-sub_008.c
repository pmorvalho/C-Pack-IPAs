
#include <stdio.h>

int main()
{
    int n;
    float x1;
    scanf("%d%f", &n, &x1);

    float min = x1;
    float max = x1;
    for (int i = 0; i < n - 1; i++) {
        float a;
        scanf("%f", &a);
        if (a < min)
            min = a;
        if (a > max)
            max = a;
    }

        printf("min: %f, max: %f\n", min, max);

    return 0;
}