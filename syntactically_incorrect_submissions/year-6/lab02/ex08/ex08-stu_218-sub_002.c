
#include <stdio.h>

int main() {

    int count;
    float num, sum = 0.0;

    scanf("%d", &count);

    for (int i = 0; i < count; i++) {
        scanf("%f", &num);
        sum += num;
    }

    printf("%.2f\n", sum / count);

    return 0;
}

