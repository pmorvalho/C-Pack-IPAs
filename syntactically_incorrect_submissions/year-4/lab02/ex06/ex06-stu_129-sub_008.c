
#include <stdio.h>

int main()
{
    int n;
    float min, max, aux;
    scanf("%d", &n);
    scanf("%f", &aux);
    min = aux;
    max = aux;
    for(int i = 1; i < n; i++){
        scanf("%f", &aux);
        if (aux > max)
            max = aux;
        if (aux < min)
            min = aux;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}