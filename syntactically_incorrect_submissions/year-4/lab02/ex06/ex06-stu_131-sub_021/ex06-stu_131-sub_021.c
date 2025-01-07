
#include <stdio.h>
int main()
{
    int n;
    float v,min,max,temp;

    
    scanf("%d",&n);

    
    scanf("%f",&v);
    max=min=v;

    
    while(n>0)
    {
        if(v>max)
        {
            max=v;
        }
        if(v<min)
        {
            min=v;
        }
        --n;
        scanf("%f",&v);
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}