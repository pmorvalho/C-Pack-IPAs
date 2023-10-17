
#include <stdio.h>

int main()
{
    int n;
    float med, x, sum, num;
    scanf("%d ", &n);
    sum = 0;
    num = n;
    while (n > 0)
    {
        if (n == 1)
        {
            scanf("%f", &x);
        }
        else
        {
            scanf("%f ", &x);
        }
        sum += x;
        n--;
    }
    med = sum/num;
    printf("%.2f\n", med);
    return 0;
}