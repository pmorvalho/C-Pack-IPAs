#include <stdio.h>

int main()
{

    int N, cont = 1;
    float l;
    float min;
    float max;

    scanf("%d", &N);
    scanf("%f", &min);
    scanf("%f", &max);

    if (min > max){        
        l = max;
        max = min;
        min = l;
    }

    while (cont <= N-2){
        scanf("%f", &l);
        if (l < min)
            min = l;
        else if (l > max)
            max = l;
        cont++;
    }

    printf("min: %f, max: %f\n", min, max);
    return 0;
}
