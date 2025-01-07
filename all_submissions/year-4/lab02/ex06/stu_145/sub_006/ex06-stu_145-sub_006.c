

#include <stdio.h>

int main() {
    int n;
    float max, min, number;
    int var = 1;
    scanf("%d%f", &n, &max);
    min = max;
    while(var < n)
    {
        scanf("%f", &number);
        if (number > max)
            max = number;
        if (number < min)
            min = number;
        ++var;
    }
    printf("min: %f, max: %f\n", min, max);   
    return 0;
}