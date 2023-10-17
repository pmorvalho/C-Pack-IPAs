

#include <stdio.h>

int main(void) {

    float min, max, num1;
    int numdigitos, i;
    
    scanf("%d", &numdigitos);
    scanf("%f", &num1);
    max = num1;
    min = num1;
    
    for(i = 1; i < numdigitos; i++){
        scanf("%f", &num1);
        if (max < num1)
            max = num1;
        if (min > num1)
            min = num1;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}