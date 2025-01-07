
#include <stdio.h>

int main()
{
    int n,i;
    float min,max,num;
    scanf("%d%f",&n,&num);
    min = max = num;
    for(i=0; i<(n-1); i++)
    {
        scanf("%f",&num);
        if (num > max)
            max = num;
        if (num < min)
            min = num;
    }
    return printf("min: %f, max: %f\n", min, max)==EOF;
}