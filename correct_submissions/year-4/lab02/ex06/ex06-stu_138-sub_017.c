
#include <stdio.h>
int main()
{
    int quantidade, i;
    float numeros, max, min;
    scanf("%d", &quantidade);
    scanf("%f", &numeros);
    max = numeros;
    min = numeros;
    for (i = 2; i <= quantidade; i++){
        scanf("%f", &numeros);
        if (numeros > max)
            max = numeros;
        if (numeros < min)
            min = numeros;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}