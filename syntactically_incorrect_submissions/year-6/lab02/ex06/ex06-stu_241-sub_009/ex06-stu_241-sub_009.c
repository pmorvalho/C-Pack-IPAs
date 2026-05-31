
#include <stdio.h>

int main() {
    int n;
    float f, min, max;
    scanf("%d",&n);
    scanf("%f",&f);
    min=f;
    max=f;
    for (int i=1; i<n; i++)
    {scanf("%f",&f);
    if (f<min)
    min=f;
    if (f>max)
    max=f;}
    printf("min: %f, max: %f\n", min, max);
    return 0;
}