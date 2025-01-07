
#include <stdio.h>

int main()
{
    int n, ii; float i, max, min;
    scanf("%d%f", &n, &i); max = min = i;
    for (ii=1; ii < n; ii++) {
        scanf("%f", &i);
        if (min > i) min = i;
        else if (max < i) max = i;
    } 
    printf("min: %f, max: %f\n", min, max);
    return 0;
}
