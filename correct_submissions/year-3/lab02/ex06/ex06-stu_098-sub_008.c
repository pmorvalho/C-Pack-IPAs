

#include <stdio.h>

int main() {

    int num, cont;
    float min, max, value;

    scanf("%d", &num);

    scanf("%f", &value);
    min = max = value;

    for (cont = 0; cont < num-1; cont++) {
        scanf("%f", &value);
        if (value < min)
            min = value;
        if (value > max)
            max = value;
    }

    printf("min: %f, max: %f\n", min, max);

    return 0;
}