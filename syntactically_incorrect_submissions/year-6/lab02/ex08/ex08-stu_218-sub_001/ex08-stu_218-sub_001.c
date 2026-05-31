
#include <stdio.h>

int main() {

    int count, sum = 0;
    float num;

    scanf("%d", &count);

    for (int i = 0; i < count; i++) {
        scanf("%f", &num);
        sum += num;
    }

    printf("%f\n", sum / count);

    return 0;
}

