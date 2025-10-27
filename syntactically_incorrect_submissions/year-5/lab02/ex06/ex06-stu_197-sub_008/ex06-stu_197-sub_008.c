#include <stdio.h>

int main()
{
    int elem;
    float min, max, n;

    scanf("%d", &elem);  

    
    scanf("%f", &n);
    min = max = n;

    for (int i = 1; i < elem; i++) {
        scanf("%f", &n);  

        if (n < min) {
            min = n;
        }
        if (n > max) {  
            max = n;
        }
    }

    printf("min: %f, max: %f\n", min, max);
    return 0;
}
