
#include <stdio.h>
int main()
{
    int n;
    float temp,med,min,max;
    scanf("%d%f%f%f",&n,&min,&med,&max);
    if(min>med)
    {
        temp=med;
        med=min;
        min=temp;
    }
    if(med>max)
    {
        temp=max;
        max=med;
        med=temp;
    }
    if(min>med)
    {
        temp=med;
        med=min;
        min=temp;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}