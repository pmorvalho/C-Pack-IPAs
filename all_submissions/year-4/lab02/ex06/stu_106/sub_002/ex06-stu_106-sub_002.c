
#include <stdio.h>

int main()
{
    int N, i;
    float min, max, num; 
    scanf("%d", &N);
    scanf("%f", &num);
    min = max = num;
    for (i = 1; i < N; i++) {
        scanf("%f", &num);
        if (num > max) 
            max = num;
        if (num < min)
            min = num;
    }
    printf("min: %f, max: %f\n", min, max);

    return 0;
}


