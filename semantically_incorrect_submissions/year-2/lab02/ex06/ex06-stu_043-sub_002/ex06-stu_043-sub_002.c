#include <stdio.h>

int main()
{

    int N, cont = 1, l, min, max;

    scanf("%d", &N);
    scanf("%d", &min);
    scanf("%d", &max);

    if (min > max){        
        l = max;
        max = min;
        min = l;
    }

    while (cont <= N-2){
        scanf("%d", &l);
        if (l < min)
            min = l;
        else if (l > max)
            max = l;
        cont++;
    }

    printf("min: %d, max: %d\n", min, max);
    return 0;
}