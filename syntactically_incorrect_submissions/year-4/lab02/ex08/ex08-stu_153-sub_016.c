
#include <stdio.h>

int main()
{
    double n, aux, sum, mean;
    scanf("%lf", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%lf", &aux);
        sum += aux;
    }
    mean = sum / n;
    printf("%.2lf\n", mean);
    return 0;
}

