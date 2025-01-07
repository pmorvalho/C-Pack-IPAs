
#include <stdio.h>

int main()
{
    int n;
    float sum;
    
    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        float num;
        scanf("%f", &num);

        sum = sum + num;
    }

    printf("%.2f\n", sum / n);

    return 0;
}