
#include <stdio.h>

int main ()
{
    float num, min, max;
    int i, n;
    
    scanf("%d", &n);
    scanf("%f", &num);
    
    min = num;
    max = num;
    
    for (i = 1; i < n; i++) {
        
        scanf("%f", &num);
        
        if (num > max) {
            max = num;
        }
        if (num < min) {
            min = num;
        }
    }
    
    printf("min: %f, max: %f\n", min, max);
    return 0;
}